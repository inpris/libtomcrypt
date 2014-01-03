#ifndef __AES_TAB_H__
#define __AES_TAB_H__
#ifndef __DECL_AES_TAB_H__
#define __DECL_AES_TAB_H__ extern
#endif

/* LibTomCrypt, modular cryptographic library -- Tom St Denis
 *
 * LibTomCrypt is a library that provides various cryptographic
 * algorithms in a highly modular and flexible manner.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 *
 * Tom St Denis, tomstdenis@gmail.com, http://libtom.org
 */
/* The precomputed tables for AES */
/*
Te0[x] = S [x].[02, 01, 01, 03];
Te1[x] = S [x].[03, 02, 01, 01];
Te2[x] = S [x].[01, 03, 02, 01];
Te3[x] = S [x].[01, 01, 03, 02];
Te4[x] = S [x].[01, 01, 01, 01];

Td0[x] = Si[x].[0e, 09, 0d, 0b];
Td1[x] = Si[x].[0b, 0e, 09, 0d];
Td2[x] = Si[x].[0d, 0b, 0e, 09];
Td3[x] = Si[x].[09, 0d, 0b, 0e];
Td4[x] = Si[x].[01, 01, 01, 01];
*/

/**
  @file aes_tab.h
  AES tables
*/
__DECL_AES_TAB_H__ const ulong32 TE0[256];

#ifndef PELI_TAB
__DECL_AES_TAB_H__ const ulong32 Te4[256];
#endif

#ifndef ENCRYPT_ONLY

__DECL_AES_TAB_H__ const ulong32 TD0[256];

__DECL_AES_TAB_H__ const ulong32 Td4[256];

#endif /* ENCRYPT_ONLY */

#ifdef LTC_SMALL_CODE

#define Te0(x) TE0[x]
#define Te1(x) RORc(TE0[x], 8)
#define Te2(x) RORc(TE0[x], 16)
#define Te3(x) RORc(TE0[x], 24)

#define Td0(x) TD0[x]
#define Td1(x) RORc(TD0[x], 8)
#define Td2(x) RORc(TD0[x], 16)
#define Td3(x) RORc(TD0[x], 24)

#define Te4_0 0x000000FF & Te4
#define Te4_1 0x0000FF00 & Te4
#define Te4_2 0x00FF0000 & Te4
#define Te4_3 0xFF000000 & Te4

#else

#define Te0(x) TE0[x]
#define Te1(x) TE1[x]
#define Te2(x) TE2[x]
#define Te3(x) TE3[x]

#define Td0(x) TD0[x]
#define Td1(x) TD1[x]
#define Td2(x) TD2[x]
#define Td3(x) TD3[x]

__DECL_AES_TAB_H__ const ulong32 TE1[256];
__DECL_AES_TAB_H__ const ulong32 TE2[256];
__DECL_AES_TAB_H__ const ulong32 TE3[256];

#ifndef PELI_TAB
__DECL_AES_TAB_H__ const ulong32 Te4_0[256];

__DECL_AES_TAB_H__ const ulong32 Te4_1[256];

__DECL_AES_TAB_H__ const ulong32 Te4_2[256];

__DECL_AES_TAB_H__ const ulong32 Te4_3[256];
#endif /* pelimac */

#ifndef ENCRYPT_ONLY

__DECL_AES_TAB_H__ const ulong32 TD1[256];
__DECL_AES_TAB_H__ const ulong32 TD2[256];
__DECL_AES_TAB_H__ const ulong32 TD3[256];

__DECL_AES_TAB_H__ const ulong32 Tks0[256];

__DECL_AES_TAB_H__ const ulong32 Tks1[256];

__DECL_AES_TAB_H__ const ulong32 Tks2[256];

__DECL_AES_TAB_H__ const ulong32 Tks3[256];

#endif /* ENCRYPT_ONLY */

#endif /* SMALL CODE */

__DECL_AES_TAB_H__ const ulong32 rcon[10];

#endif /* __AES_TAB_H__ */

/* $Source$ */
/* $Revision$ */
/* $Date$ */
