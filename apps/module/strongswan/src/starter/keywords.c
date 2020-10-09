/* C code produced by gperf version 3.0.4 */
/* Command-line: gperf -m 10 -C -G -D -t  */
/* Computed positions: -k'2-3,6,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


/*
 * Copyright (C) 2005 Andreas Steffen
 * Hochschule fuer Technik Rapperswil, Switzerland
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <string.h>

#include "keywords.h"

struct kw_entry {
    char *name;
    kw_token_t token;
};

#define TOTAL_KEYWORDS 192
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 26
#define MIN_HASH_VALUE 7
#define MAX_HASH_VALUE 392
/* maximum key range = 386, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned short asso_values[] =
    {
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393,   8,
      198, 393,  49, 393,  24, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393,  79, 393,  41,   1, 102,
       51,   5,   2,  12, 114,   1, 393, 183,  91, 117,
       27, 119,  80,   1,  18,   1,  21, 152,  14, 393,
      393,  63,   2, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393, 393, 393, 393, 393,
      393, 393, 393, 393, 393, 393
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct kw_entry wordlist[] =
  {
    {"pfs",               KW_PFS_DEPRECATED},
    {"lifetime",          KW_KEYLIFE},
    {"rightimei",         KW_RIGHTIMEI},
    {"rightsourceif",     KW_RIGHTSOURCEIF},
    {"left",              KW_LEFT},
    {"leftgroups",        KW_LEFTGROUPS},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"right",             KW_RIGHT},
    {"aggressive",        KW_AGGRESSIVE},
    {"leftcert",          KW_LEFTCERT},
    {"leftdns",           KW_LEFTDNS},
    {"uniqueids",         KW_UNIQUEIDS},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"rightikeport",      KW_RIGHTIKEPORT},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"rightintsubnet",    KW_RIGHTINTSUBNET},
    {"rightimeiformat",   KW_RIGHTIMEIFORMAT},
    {"rightikeportnatt",  KW_RIGHTIKEPORTNATT},
    {"rightidr_apn",      KW_RIGHTIDR_APN},
    {"lifepackets",       KW_LIFEPACKETS},
    {"certuribase",       KW_CERTURIBASE},
    {"rightsubnetwithin", KW_RIGHTSUBNET},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"interfaces",        KW_SETUP_DEPRECATED},
    {"reqid",             KW_REQID},
    {"interface",         KW_INTERFACE},
    {"keep_alive",        KW_SETUP_DEPRECATED},
    {"retrans_tries",     KW_RETRANS_TRIES},
    {"leftintsubnet",     KW_LEFTINTSUBNET},
    {"retrans_base",      KW_RETRANS_BASE},
    {"rightid",           KW_RIGHTID},
    {"rightdns",          KW_RIGHTDNS},
    {"server_nocert",     KW_SERVER_NOCERT},
    {"lifebytes",         KW_LIFEBYTES},
    {"rightforcetsi64",   KW_RIGHTFORCETSI64},
    {"virtual_private",   KW_SETUP_DEPRECATED},
    {"leftsigkey",        KW_LEFTSIGKEY},
    {"keylife",           KW_KEYLIFE},
    {"leftrsasigkey",     KW_LEFTSIGKEY},
    {"rightsigkey",       KW_RIGHTSIGKEY},
    {"leftcertpolicy",    KW_LEFTCERTPOLICY},
    {"keyingtries",       KW_KEYINGTRIES},
    {"mark_in",           KW_MARK_IN},
    {"leftca",            KW_LEFTCA},
    {"leftidr_apn",       KW_LEFTIDR_APN},
    {"marginbytes",       KW_MARGINBYTES},
    {"use_cfg_vip",       KW_USE_CFG_VIP},
    {"marginpackets",     KW_MARGINPACKETS},
    {"margintime",        KW_REKEYMARGIN},
    {"device_identity",   KW_DEVICE_IDENTITY},
    {"leftnexthop",       KW_LEFT_DEPRECATED},
    {"fragmentation",     KW_FRAGMENTATION},
    {"rightpcscf",        KW_RIGHTPCSCF},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"rightrsasigkey",    KW_RIGHTSIGKEY},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"mediation",         KW_MEDIATION},
    {"leftid",            KW_LEFTID},
    {"crluri",            KW_CRLURI},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"leftpcscf",         KW_LEFTPCSCF},
    {"rightforcetsifull", KW_RIGHTFORCETSIFULL},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"crluri1",           KW_CRLURI},
    {"send_del_ike_auth_ntfy_err", KW_SEND_DEL_IKE_AUTH_NTFY_ERR},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"ocspuri",           KW_OCSPURI},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"rightcustcpimei",   KW_RIGHTCUSTCPIMEI},
    {"rightnexthop",      KW_RIGHT_DEPRECATED},
    {"leftimei",          KW_LEFTIMEI},
    {"certreq_critical",  KW_CERTREQ_CRITICAL},
    {"mobike",	           KW_MOBIKE},
    {"ocspuri1",          KW_OCSPURI},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"leftsourceif",      KW_LEFTSOURCEIF},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"inactivity",        KW_INACTIVITY},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"rightcert",         KW_RIGHTCERT},
    {"ldapbase",          KW_CA_DEPRECATED},
    {"me_peerid",         KW_ME_PEERID},
    {"mediated_by",       KW_MEDIATED_BY},
    {"type",              KW_TYPE},
    {"forceencaps",       KW_FORCEENCAPS},
    {"rightcustcppcscf6", KW_RIGHTCUSTCPPCSCF6},
    {"leftimeiformat",    KW_LEFTIMEIFORMAT},
    {"is_emergency",      KW_IS_EMERGENCY},
    {"rightca",           KW_RIGHTCA},
    {"esp",               KW_ESP},
    {"klipsdebug",        KW_SETUP_DEPRECATED},
    {"hashandurl",        KW_HASHANDURL},
    {"reauth_mbb",        KW_REAUTH_MBB},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"leftcustcpimei",    KW_LEFTCUSTCPIMEI},
    {"detach_timeout",    KW_DETACH_TIMEOUT},
    {"rightauth",         KW_RIGHTAUTH},
    {"keepalivedelay",    KW_KEEPALIVEDELAY},
    {"hidetos",           KW_SETUP_DEPRECATED},
    {"rightcustcppcscf4", KW_RIGHTCUSTCPPCSCF4},
    {"retrans_to",        KW_RETRANS_TO},
    {"overridemtu",       KW_SETUP_DEPRECATED},
    {"nat_traversal",     KW_SETUP_DEPRECATED},
    {"fast_reauth",       KW_FAST_REAUTH},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"ocsp",              KW_OCSP},
    {"dpdaction",         KW_DPDACTION},
    {"leftforcetsi64",    KW_LEFTFORCETSI64},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"cacert",            KW_CACERT},
    {"rightcertpolicy",   KW_RIGHTCERTPOLICY},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"ike",               KW_IKE},
    {"packetdefault",     KW_SETUP_DEPRECATED},
    {"leftcustcppcscf6",  KW_LEFTCUSTCPPCSCF6},
    {"pcscf_restore",     KW_PCSCF_RESTORE},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"leftsubnetwithin",  KW_LEFTSUBNET},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"eap",               KW_CONN_DEPRECATED},
    {"charondebug",       KW_CHARONDEBUG},
    {"ikelifetime",       KW_IKELIFETIME},
    {"mark_out",          KW_MARK_OUT},
    {"aaa_identity",      KW_AAA_IDENTITY},
    {"tfc",               KW_TFC},
    {"pfsgroup",          KW_PFS_DEPRECATED},
    {"encrkeydisplay",    KW_ENCRKEYDISPLAY},
    {"rightintnetmask",   KW_RIGHTINTNETMASK},
    {"charonstart",       KW_SETUP_DEPRECATED},
    {"also",              KW_ALSO},
    {"liveness_check",    KW_LIVENESS_CHECK},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"leftcert2",         KW_LEFTCERT2},
    {"rightid2",          KW_RIGHTID2},
    {"crlcheckinterval",  KW_SETUP_DEPRECATED},
    {"leftikeport",       KW_LEFTIKEPORT},
    {"leftcustcppcscf4",  KW_LEFTCUSTCPPCSCF4},
    {"leftikeportnatt",   KW_LEFTIKEPORTNATT},
    {"no_initct",         KW_NO_INIT_CONTACT},
    {"ah",                KW_AH},
    {"leftintnetmask",    KW_LEFTINTNETMASK},
    {"leftforcetsifull",  KW_LEFTFORCETSIFULL},
    {"leftgroups2",       KW_LEFTGROUPS2},
    {"rightgroups2",      KW_RIGHTGROUPS2},
    {"force_keepalive",   KW_SETUP_DEPRECATED},
    {"ldaphost",          KW_CA_DEPRECATED},
    {"mark",              KW_MARK},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"fragicmp",          KW_SETUP_DEPRECATED},
    {"compress",          KW_COMPRESS},
    {"leftca2",           KW_LEFTCA2},
    {"cachecrls",         KW_CACHECRLS},
    {"rekey",             KW_REKEY},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"leftid2",           KW_LEFTID2},
    {"oostimeout",        KW_OOSTIMEOUT},
    {"plutostderrlog",    KW_SETUP_DEPRECATED},
    {"wdrv_keepalive",    KW_WDRV_KEEPALIVE},
    {"plutostart",        KW_SETUP_DEPRECATED},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"reauth",            KW_REAUTH},
    {"leftauth",          KW_LEFTAUTH},
    {"nocrsend",          KW_SETUP_DEPRECATED},
    {"closeaction",       KW_CLOSEACTION},
    {"dpddelay",          KW_DPDDELAY},
    {"dumpdir",           KW_SETUP_DEPRECATED},
    {"auto",              KW_AUTO},
    {"prepluto",          KW_SETUP_DEPRECATED},
    {"authby",            KW_AUTHBY},
    {"pkcs11initargs",    KW_PKCS11_DEPRECATED},
    {"pkcs11module",      KW_PKCS11_DEPRECATED},
    {"modeconfig",        KW_MODECONFIG},
    {"xauth",             KW_XAUTH},
    {"pkcs11keepstate",   KW_PKCS11_DEPRECATED},
    {"crluri2",           KW_CRLURI2},
    {"plutodebug",        KW_SETUP_DEPRECATED},
    {"rightca2",          KW_RIGHTCA2},
    {"rightcert2",        KW_RIGHTCERT2},
    {"dpd_noreply",       KW_DPD_NOREPLY},
    {"ocspuri2",          KW_OCSPURI2},
    {"skipcheckcert",     KW_SKIPCHECKCERT},
    {"postpluto",         KW_SETUP_DEPRECATED},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"addrchg_reauth",    KW_ADDRCHG_REAUTH},
    {"xauth_identity",    KW_XAUTH_IDENTITY},
    {"no_eaponly",        KW_NO_EAP_ONLY},
    {"skipcheckid",       KW_SKIPCHECKID},
    {"leftauth2",         KW_LEFTAUTH2},
    {"pkcs11proxy",       KW_PKCS11_DEPRECATED},
    {"ikedscp",           KW_IKEDSCP,},
    {"wsharkfiledump",    KW_WSHARKFILEDUMP}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,   1,  -1,  -1,
     -1,  -1,  -1,  -1,   2,  -1,  -1,  -1,  -1,   3,
     -1,  -1,   4,  -1,  -1,  -1,   5,   6,  -1,   7,
      8,   9,  10,  11,  -1,  12,  13,  14,  15,  16,
     17,  18,  -1,  19,  -1,  -1,  20,  21,  22,  23,
     -1,  24,  25,  -1,  26,  -1,  27,  28,  29,  -1,
     30,  -1,  31,  32,  -1,  33,  34,  -1,  -1,  35,
     36,  37,  38,  -1,  39,  -1,  -1,  -1,  40,  41,
     -1,  -1,  42,  -1,  43,  44,  45,  -1,  46,  47,
     48,  49,  50,  51,  52,  53,  -1,  54,  55,  -1,
     -1,  56,  -1,  57,  -1,  58,  -1,  59,  -1,  60,
     61,  -1,  -1,  62,  63,  64,  -1,  65,  66,  67,
     68,  69,  70,  71,  -1,  72,  73,  74,  75,  -1,
     76,  77,  78,  79,  -1,  80,  81,  -1,  -1,  82,
     -1,  83,  84,  -1,  85,  -1,  86,  -1,  -1,  87,
     88,  -1,  -1,  89,  90,  91,  -1,  -1,  -1,  -1,
     92,  93,  -1,  94,  95,  96,  -1,  97,  98,  99,
     -1, 100, 101, 102, 103, 104, 105, 106, 107, 108,
    109, 110,  -1, 111,  -1, 112, 113,  -1, 114, 115,
    116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
    126, 127, 128,  -1, 129, 130,  -1, 131, 132, 133,
    134, 135, 136,  -1, 137,  -1, 138,  -1,  -1, 139,
    140, 141,  -1, 142, 143, 144, 145,  -1,  -1,  -1,
    146,  -1,  -1,  -1,  -1,  -1, 147, 148,  -1, 149,
    150,  -1,  -1, 151,  -1, 152, 153,  -1,  -1,  -1,
     -1,  -1, 154, 155,  -1,  -1,  -1,  -1, 156,  -1,
    157, 158,  -1,  -1,  -1, 159,  -1,  -1,  -1, 160,
    161, 162,  -1,  -1,  -1, 163,  -1,  -1,  -1, 164,
     -1,  -1,  -1, 165,  -1, 166, 167,  -1,  -1,  -1,
     -1,  -1, 168,  -1,  -1, 169,  -1,  -1, 170,  -1,
    171, 172, 173, 174,  -1, 175, 176,  -1,  -1,  -1,
     -1, 177,  -1, 178, 179,  -1,  -1, 180,  -1,  -1,
     -1,  -1, 181,  -1,  -1,  -1,  -1,  -1,  -1, 182,
     -1,  -1,  -1, 183, 184,  -1,  -1,  -1,  -1, 185,
     -1, 186,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    187,  -1,  -1,  -1,  -1,  -1, 188, 189,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 190,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 191
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct kw_entry *
in_word_set (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
