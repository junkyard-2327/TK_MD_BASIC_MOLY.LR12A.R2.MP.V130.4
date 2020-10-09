/*
 * AES (Rijndael) cipher
 * Copyright (c) 2003-2005, Jouni Malinen <j@w1.fi>
 * Copyright (C) 2015 MediaTek Inc.
 *
 *
 * This program is free software; this software is distributed under 
 * the terms of 3-clause BSD license.
 *
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice, 
 * this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation 
 * and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its 
 * contributors may be used to endorse or promote products derived from 
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */
#include "aes.h"

#ifdef _MSC_VER
#include <stdlib.h>
#endif

/* #define FULL_UNROLL */
#define AES_SMALL_TABLES

extern const kal_uint32 Te0[256];
extern const kal_uint32 Te1[256];
extern const kal_uint32 Te2[256];
extern const kal_uint32 Te3[256];
extern const kal_uint32 Te4[256];
extern const kal_uint32 Td0[256];
extern const kal_uint32 Td1[256];
extern const kal_uint32 Td2[256];
extern const kal_uint32 Td3[256];
extern const kal_uint32 Td4[256];
extern const kal_uint32 rcon[10];
extern const kal_uint8 Td4s[256];
extern const kal_uint8 rcons[10];

#ifndef AES_SMALL_TABLES

#define RCON(i) rcon[(i)]

#define TE0(i) Te0[((i) >> 24) & 0xff]
#define TE1(i) Te1[((i) >> 16) & 0xff]
#define TE2(i) Te2[((i) >> 8) & 0xff]
#define TE3(i) Te3[(i) & 0xff]
#define TE41(i) (Te4[((i) >> 24) & 0xff] & 0xff000000)
#define TE42(i) (Te4[((i) >> 16) & 0xff] & 0x00ff0000)
#define TE43(i) (Te4[((i) >> 8) & 0xff] & 0x0000ff00)
#define TE44(i) (Te4[(i) & 0xff] & 0x000000ff)
#define TE421(i) (Te4[((i) >> 16) & 0xff] & 0xff000000)
#define TE432(i) (Te4[((i) >> 8) & 0xff] & 0x00ff0000)
#define TE443(i) (Te4[(i) & 0xff] & 0x0000ff00)
#define TE414(i) (Te4[((i) >> 24) & 0xff] & 0x000000ff)
#define TE4(i) (Te4[(i)] & 0x000000ff)

#define TD0(i) Td0[((i) >> 24) & 0xff]
#define TD1(i) Td1[((i) >> 16) & 0xff]
#define TD2(i) Td2[((i) >> 8) & 0xff]
#define TD3(i) Td3[(i) & 0xff]
#define TD41(i) (Td4[((i) >> 24) & 0xff] & 0xff000000)
#define TD42(i) (Td4[((i) >> 16) & 0xff] & 0x00ff0000)
#define TD43(i) (Td4[((i) >> 8) & 0xff] & 0x0000ff00)
#define TD44(i) (Td4[(i) & 0xff] & 0x000000ff)
#define TD0_(i) Td0[(i) & 0xff]
#define TD1_(i) Td1[(i) & 0xff]
#define TD2_(i) Td2[(i) & 0xff]
#define TD3_(i) Td3[(i) & 0xff]

#else /* AES_SMALL_TABLES */

#define RCON(i) (rcons[(i)] << 24)
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
#define rotr(val,bits) ((val >> bits) | (val << (32 - bits)))
#endif
#define TE0(i) Te0[((i) >> 24) & 0xff]
#define TE1(i) rotr(Te0[((i) >> 16) & 0xff], 8)
#define TE2(i) rotr(Te0[((i) >> 8) & 0xff], 16)
#define TE3(i) rotr(Te0[(i) & 0xff], 24)
#define TE41(i) ((Te0[((i) >> 24) & 0xff] << 8) & 0xff000000)
#define TE42(i) (Te0[((i) >> 16) & 0xff] & 0x00ff0000)
#define TE43(i) (Te0[((i) >> 8) & 0xff] & 0x0000ff00)
#define TE44(i) ((Te0[(i) & 0xff] >> 8) & 0x000000ff)
#define TE421(i) ((Te0[((i) >> 16) & 0xff] << 8) & 0xff000000)
#define TE432(i) (Te0[((i) >> 8) & 0xff] & 0x00ff0000)
#define TE443(i) (Te0[(i) & 0xff] & 0x0000ff00)
#define TE414(i) ((Te0[((i) >> 24) & 0xff] >> 8) & 0x000000ff)
#define TE4(i) ((Te0[(i)] >> 8) & 0x000000ff)

#define TD0(i) Td0[((i) >> 24) & 0xff]
#define TD1(i) rotr(Td0[((i) >> 16) & 0xff], 8)
#define TD2(i) rotr(Td0[((i) >> 8) & 0xff], 16)
#define TD3(i) rotr(Td0[(i) & 0xff], 24)
#define TD41(i) (Td4s[((i) >> 24) & 0xff] << 24)
#define TD42(i) (Td4s[((i) >> 16) & 0xff] << 16)
#define TD43(i) (Td4s[((i) >> 8) & 0xff] << 8)
#define TD44(i) (Td4s[(i) & 0xff])
#define TD0_(i) Td0[(i) & 0xff]
#define TD1_(i) rotr(Td0[(i) & 0xff], 8)
#define TD2_(i) rotr(Td0[(i) & 0xff], 16)
#define TD3_(i) rotr(Td0[(i) & 0xff], 24)

#endif /* AES_SMALL_TABLES */

#ifdef _MSC_VER
#define SWAP(x) (_lrotl(x, 8) & 0x00ff00ff | _lrotr(x, 8) & 0xff00ff00)
#define GETU32(p) SWAP(*((kal_uint32 *)(p)))
#define PUTU32(ct, st) { *((kal_uint32 *)(ct)) = SWAP((st)); }
#else
#define GETU32(pt) (((kal_uint32)(pt)[0] << 24) ^ ((kal_uint32)(pt)[1] << 16) ^ \
((kal_uint32)(pt)[2] <<  8) ^ ((kal_uint32)(pt)[3]))
#define PUTU32(ct, st) { \
(ct)[0] = (kal_uint8)((st) >> 24); (ct)[1] = (kal_uint8)((st) >> 16); \
(ct)[2] = (kal_uint8)((st) >>  8); (ct)[3] = (kal_uint8)(st); }
#endif

#define AES_PRIV_SIZE (4 * 44)
