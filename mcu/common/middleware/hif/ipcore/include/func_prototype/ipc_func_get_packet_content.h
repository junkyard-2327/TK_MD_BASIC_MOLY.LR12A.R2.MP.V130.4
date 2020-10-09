/*!
 * Look into packet to gather necessary IP header & the upper layer protocol header information.
 * Note that, for IPv6's packet, current implementation don't handle the following cases and take them  as not found:
 *     #1. IPv6 packet with ESP header:
 *        According to RFC 4303 section 3.1, everything after ESP header is encrypted.
 *        Since we cannot decrypt it, we cannot acturally look into the upper layer protocol.
 *
 *     #2. IPv6 extension header not defined in RFC 2460:
 *        If necessary, we will handle them here according to corresponding RFC.
 *
 *     #3. fragmentation:
 *        No application needs IPv6 fragmentation on a modem platform so far.
 *
 * # DID version:
 * @param   p_packet [IN] The packet.
 * @param   did [IN] DID of packets content.
 * @param   base_si_idx [IN] Corresponding SI index for p_packet.
 * @param   p_info [OUT] The necessary information gathered for later packete filtering.
 *
 * # GPD version:
 * @param   ipv6_packet [IN] The packet.
 * @param   gpd [IN] GPD of packet content.
 * @param   base_bd [IN] Corresponding BD for base_addr_p. It might be NULL if the GPD does not have BD list.
 * @param   p_info [OUT] The necessary information gathered for later packete filtering.
 *
 * # Continous Buffer version:
 * @param   ipv6_packet [IN] The packet.
 * @param   packet_len [IN] Length of the packet.
 * @param   p_info [OUT] The necessary information gathered for later packete filtering.
 *
 * @return KAL_TRUE if the packet's information was gathered sucessfully, KAL_FALSE otherwise.
 */

#if defined(__IPC_DES_DID__)
    #define _IPC_SHIFT_CONTENT(_offset, _error_msg) \
        do { \
            if (KAL_TRUE != ipc_shift_did_content_ptr(p_addr, did, next_si_idx, _offset, &p_addr, &next_si_idx)) \
            { \
                hif_trace_error(IPC_TR_GET_INFO_DID_ ## _error_msg, did, base_si_idx, p_packet, _offset, p_addr, next_si_idx); \
                return KAL_FALSE; \
            } \
        } while (0)

    #define _IPC_GET_CONT_CONTENT(_offset, _length, _error_msg) \
        do { \
            if (KAL_TRUE != ipc_get_continuous_content_did(p_addr, _offset, did, next_si_idx, _length, &comm_continuous_p, comm_buff)) \
            { \
                hif_trace_error(IPC_TR_GET_INFO_DID_ ## _error_msg, p_addr, _offset, did, next_si_idx, _length); \
                return KAL_FALSE; \
            } \
        } while (0)

#elif defined(__IPC_DES_GPD__)
    #define _IPC_SHIFT_CONTENT(_offset, _error_msg) \
        do { \
            if (KAL_TRUE != ipc_shift_gpd_content_ptr(p_addr, gpd, next_bd, _offset, &p_addr, &next_bd)) \
            { \
                hif_trace_error(IPC_TR_GET_INFO_ ## _error_msg, gpd, base_bd, p_packet, _offset, p_addr, next_bd); \
                return KAL_FALSE; \
            } \
        } while (0)

    #define _IPC_GET_CONT_CONTENT(_offset, _length, _error_msg) \
        do { \
            if (KAL_TRUE != ipc_get_continuous_content(p_addr, _offset, gpd, next_bd, _length, &comm_continuous_p, comm_buff)) \
            { \
                hif_trace_error(IPC_TR_GET_INFO_ ## _error_msg, p_addr, _offset, gpd, next_bd, _length); \
                return KAL_FALSE; \
            } \
        } while (0)
#else
    #define _IPC_SHIFT_CONTENT(_offset, _error_msg) \
        do { \
            data_len += _offset; \
        } while (0)

    #define _IPC_GET_CONT_CONTENT(_offset, _length, _error_msg) \
        do { \
            p_addr = p_packet + data_len + _offset; \
            comm_continuous_p = p_addr; \
            if (packet_len < (data_len + _offset + _length)) { \
                hif_trace_error(IPC_TR_GET_INFO_SPD_ ## _error_msg, p_packet, (data_len + _offset + _length), packet_len); \
                return KAL_FALSE; \
            } \
        } while (0)
#endif


#if defined(__IPC_DES_DID__)
kal_bool ipc_get_packet_info_did(kal_uint8 *p_packet, upcm_did *did, kal_uint32 base_si_idx, ipc_packet_info_t *p_info)
#elif defined(__IPC_DES_GPD__)
kal_bool ipc_get_packet_info_gpd(kal_uint8 *p_packet, qbm_gpd *gpd, qbm_gpd *base_bd, ipc_packet_info_t *p_info)
#else
kal_bool ipc_get_packet_info(kal_uint8 *p_packet, kal_uint16 packet_len, ipc_packet_info_t *p_info)
#endif
{
    kal_uint32 ip_header_len;
    kal_uint16 tmp_len, tmp_payload_len;
    kal_uint8 *p_addr;
    kal_uint8 *comm_continuous_p = NULL;

#if defined(__IPC_DES_DID__)
    kal_uint32 next_si_idx;
    kal_uint8 comm_buff[18];// max is ipv6 src/dest addr
#elif defined(__IPC_DES_GPD__)
    qbm_gpd *next_bd;
    kal_uint8 comm_buff[18];// max is ipv6 src/dest addr
#else
    kal_uint16 data_len;
#endif

    p_addr = p_packet;

#if defined(__IPC_DES_DID__)
    next_si_idx = base_si_idx;
#elif defined(__IPC_DES_GPD__)
    next_bd = base_bd;
#else
    data_len = 0;
#endif

    //kal_mem_set(p_info, 0, sizeof(ipc_packet_info_t));// init
    p_info->info_valid_fields = 0;//init

    QBM_CACHE_INVALID(p_packet, 1);
    if (IPC_HDR_IS_V4(p_packet)){
        // check first 12B(fragment, total len, header len, protocol)
        _IPC_GET_CONT_CONTENT(0, 12, V4_IPV4_HDR_FAILED);

        p_info->ip_id = IPC_NE_GET_2B(comm_continuous_p + 4);
        p_info->fragment = ((IPC_NE_GET_2B(comm_continuous_p + 6) & 0x3FFF) > 0);
        ip_header_len = (kal_uint32)IPC_HDR_V4_GET_IHL(comm_continuous_p + 0);
        if(p_info->fragment) {
            p_info->frag_payload_offset = (IPC_NE_GET_2B(comm_continuous_p + 6) & 0x1FFF) << 3;
            p_info->frag_flag = (IPC_NE_GET_1B(comm_continuous_p + 6) & 0x60) >> 5;
            p_info->frag_payload_len = IPC_NE_GET_2B(comm_continuous_p + 2);
            p_info->frag_buffer_payload_offset = ip_header_len;
        }
        p_info->protocol = IPC_NE_GET_1B(comm_continuous_p + 9);
        p_info->info_valid_fields |= IPC_FILTER_BY_PROTOCOL;
        p_info->ipv4_checksum = IPC_NE_GET_2B(comm_continuous_p + 10);

        // check src/dest addr
        _IPC_GET_CONT_CONTENT(12, 8, V4_IPV4_HDR_FAILED);

        kal_mem_cpy(p_info->src_addr, comm_continuous_p, 4);
        kal_mem_cpy(p_info->dst_addr, comm_continuous_p + 4, 4);
        p_info->info_valid_fields |= (IPC_FILTER_BY_SRC_IPV4 + IPC_FILTER_BY_DST_IPV4);

        if (p_info->protocol == IPC_HDR_PROT_UDP){

            // We only get L4 info in first fragment, and fragment payload length must larget than specific size
            if( p_info->fragment &&
                (p_info->frag_payload_offset != 0 || p_info->frag_payload_len < 4)) {
                return KAL_TRUE;
            }

            // check src/dest port
            _IPC_GET_CONT_CONTENT(ip_header_len, 8, V4_UDP_HDR_FAILED);

            p_info->src_port = IPC_NE_GET_2B(comm_continuous_p);
            p_info->dst_port = IPC_NE_GET_2B(comm_continuous_p + 2);
            p_info->info_valid_fields |= (IPC_FILTER_BY_SRC_PORT + IPC_FILTER_BY_DST_PORT);
            p_info->l4_offset = ip_header_len;
            p_info->data_offset = ip_header_len + IPC_HDR_UDP_HEADER_SIZE;
            p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 6);
        }
        else if (p_info->protocol == IPC_HDR_PROT_TCP){

            // We only get L4 info in first fragment, and fragment payload length must larget than specific size
            if( p_info->fragment &&
                (p_info->frag_payload_offset != 0 || p_info->frag_payload_len < 14)) {
                return KAL_TRUE;
            }

            // check src/dest port & flags
            _IPC_GET_CONT_CONTENT(ip_header_len, 18, V4_TCP_HDR_FAILED);

            p_info->src_port = IPC_NE_GET_2B(comm_continuous_p);
            p_info->dst_port = IPC_NE_GET_2B(comm_continuous_p + 2);
            p_info->tcp_flags = IPC_HDR_TCP_GET_FLAGS(comm_continuous_p);
            p_info->info_valid_fields |= (IPC_FILTER_BY_SRC_PORT + IPC_FILTER_BY_DST_PORT + IPC_FILTER_BY_TCP_FLAGS);
            p_info->l4_offset = ip_header_len;
            p_info->data_offset = ip_header_len + IPC_HDR_TCP_GET_OFFSET(comm_continuous_p);
            p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 16);
        }
        else if (p_info->protocol == IPC_HDR_PROT_ICMP){

            // We only get L4 info in first fragment, and fragment payload length must larget than specific size
            if( p_info->fragment &&
                (p_info->frag_payload_offset != 0 || p_info->frag_payload_len < 1)) {
                return KAL_TRUE;
            }

            // check type
            _IPC_GET_CONT_CONTENT(ip_header_len, 4, V4_ICMP_HDR_FAILED);

            p_info->icmpv4_type = IPC_NE_GET_1B(comm_continuous_p);
            p_info->info_valid_fields |= IPC_FILTER_BY_ICMPV4_TYPE;
            p_info->l4_offset = ip_header_len;
            p_info->data_offset = ip_header_len + IPC_HDR_ICMP_HEADER_SIZE;
            p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 2);
        }
    }else if (IPC_HDR_IS_V6(p_packet)){
        p_info->fragment = 0;

        // check first 8B(total len, protocol(next header))
        _IPC_GET_CONT_CONTENT(0, 8, V6_IPV6_HDR_FAILED);
        ip_header_len = 40;// fix
        p_info->data_offset = ip_header_len;
        p_info->protocol = IPC_NE_GET_1B(comm_continuous_p + 6);// next header
        p_info->info_valid_fields |= IPC_FILTER_BY_PROTOCOL;
        tmp_payload_len = IPC_NE_GET_2B(comm_continuous_p + 4);

        // check src addr
        _IPC_GET_CONT_CONTENT(8, 16, V6_IPV6_HDR_FAILED);
        kal_mem_cpy(p_info->src_addr, comm_continuous_p, 16);
        p_info->info_valid_fields |= IPC_FILTER_BY_SRC_IPV6;

        // check dest addr
        _IPC_GET_CONT_CONTENT(24, 16, V6_IPV6_HDR_FAILED);
        kal_mem_cpy(p_info->dst_addr, comm_continuous_p, 16);
        p_info->info_valid_fields |= IPC_FILTER_BY_DST_IPV6;

        // parsing extention header
        tmp_len = ip_header_len;
        while(1){
            if ((p_info->protocol == IPC_HDR_PROT_IPV6_HOP) ||
                (p_info->protocol == IPC_HDR_PROT_IPV6_ROUTE) ||
                (p_info->protocol == IPC_HDR_PROT_IPV6_DEST)){

                _IPC_SHIFT_CONTENT(tmp_len, FIND_V6_EXT_HDR_SHIFT_FAILED);
                _IPC_GET_CONT_CONTENT(0, 2, FIND_V6_EXT_HDR_FAILED);

                // next header
                p_info->protocol = IPC_NE_GET_1B(comm_continuous_p);
                // current header len
                tmp_len = (IPC_NE_GET_1B(comm_continuous_p + 1) + 1)*8;
                p_info->data_offset += tmp_len;
                if (tmp_payload_len >= tmp_len) {
                    tmp_payload_len -= tmp_len;
                } else {
                    return KAL_FALSE;
                }
            }else if (p_info->protocol == IPC_HDR_PROT_AH){

                _IPC_SHIFT_CONTENT(tmp_len, FIND_V6_EXT_HDR_SHIFT_FAILED);
                _IPC_GET_CONT_CONTENT(0, 2, FIND_V6_EXT_HDR_FAILED);

                // next header
                p_info->protocol = IPC_NE_GET_1B(comm_continuous_p);
                // current header len
                tmp_len = (IPC_NE_GET_1B(comm_continuous_p + 1) + 2)*4;
                p_info->data_offset += tmp_len;
                if (tmp_payload_len >= tmp_len) {
                    tmp_payload_len -= tmp_len;
                } else {
                    return KAL_FALSE;
                }
            }else if (p_info->protocol == IPC_HDR_PROT_IPV6_FRAG){

                _IPC_SHIFT_CONTENT(tmp_len, FIND_V6_EXT_HDR_SHIFT_FAILED);
                _IPC_GET_CONT_CONTENT(0, 8, FIND_V6_EXT_HDR_FAILED);

                p_info->fragment = 1;
                p_info->ip_id = IPC_NE_GET_4B(p_addr + 4);
                p_info->frag_payload_offset = IPC_NE_GET_2B(p_addr + 2) & 0xFFF8;
                p_info->frag_flag = IPC_NE_GET_1B(p_addr + 3) & 0x1;
                if (tmp_payload_len >= 8) {
                    p_info->frag_payload_len = tmp_payload_len - 8;
                } else {
                    return KAL_FALSE;
                }
                // next header
                p_info->protocol = IPC_NE_GET_1B(comm_continuous_p);
                // current header len
                tmp_len = IPC_HDR_V6_FRAGMENT_HEADER_SIZE;
                p_info->data_offset += IPC_HDR_V6_FRAGMENT_HEADER_SIZE;
                p_info->frag_buffer_payload_offset = p_info->data_offset;
            }else{
                break;
            }
        }

        if (p_info->protocol == IPC_HDR_PROT_UDP){

            _IPC_SHIFT_CONTENT(tmp_len, FIND_V6_EXT_HDR_SHIFT_FAILED);
            _IPC_GET_CONT_CONTENT(0, 8, V6_UDP_HDR_FAILED);

            p_info->src_port = IPC_NE_GET_2B(comm_continuous_p);
            p_info->dst_port = IPC_NE_GET_2B(comm_continuous_p + 2);
            p_info->info_valid_fields |= (IPC_FILTER_BY_SRC_PORT + IPC_FILTER_BY_DST_PORT);
            p_info->l4_offset = p_info->data_offset;
            p_info->data_offset += IPC_HDR_UDP_HEADER_SIZE;
            p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 6);
        }
        else if (p_info->protocol == IPC_HDR_PROT_TCP){

            _IPC_SHIFT_CONTENT(tmp_len, FIND_V6_EXT_HDR_SHIFT_FAILED);
            _IPC_GET_CONT_CONTENT(0, 18, V6_TCP_HDR_FAILED);

            p_info->src_port = IPC_NE_GET_2B(comm_continuous_p);
            p_info->dst_port = IPC_NE_GET_2B(comm_continuous_p + 2);
            p_info->tcp_flags = IPC_HDR_TCP_GET_FLAGS(comm_continuous_p);
            p_info->info_valid_fields |= (IPC_FILTER_BY_SRC_PORT + IPC_FILTER_BY_DST_PORT + IPC_FILTER_BY_TCP_FLAGS);
            p_info->l4_offset = p_info->data_offset;
            p_info->data_offset += IPC_HDR_TCP_GET_OFFSET(comm_continuous_p);
            p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 16);
        }
        else if (p_info->protocol == IPC_HDR_PROT_ICMP){

            _IPC_SHIFT_CONTENT(tmp_len, FIND_V6_EXT_HDR_SHIFT_FAILED);
            _IPC_GET_CONT_CONTENT(0, 4, V6_ICMP_HDR_FAILED);

            p_info->icmpv6_type = IPC_NE_GET_1B(p_addr);
            p_info->info_valid_fields |= IPC_FILTER_BY_ICMPV6_TYPE;
            p_info->l4_offset = p_info->data_offset;
            p_info->data_offset += IPC_HDR_ICMP_HEADER_SIZE;
            p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 2);
        }
    }

    return KAL_TRUE;
}

#undef _IPC_SHIFT_CONTENT
#undef _IPC_GET_CONT_CONTENT
