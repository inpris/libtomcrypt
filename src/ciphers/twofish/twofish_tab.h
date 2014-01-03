#ifndef __TWOFISH_TAB_H__
#define __TWOFISH_TAB_H__
#ifndef __DECL_TWOFISH_TAB_H__
#define __DECL_TWOFISH_TAB_H__ extern
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

 /**
    @file twofish_tab.h
    Twofish tables, Tom St Denis
 */
#ifdef LTC_TWOFISH_TABLES

/* pre generated 8x8 tables from the four 4x4s */
__DECL_TWOFISH_TAB_H__ const unsigned char SBOX[2][256];

/* the 4x4 MDS in a nicer format */
__DECL_TWOFISH_TAB_H__ const ulong32 mds_tab[4][256];

#ifdef LTC_TWOFISH_ALL_TABLES

/* the 4x8 RS transform */
__DECL_TWOFISH_TAB_H__ const ulong32 rs_tab0[256];

__DECL_TWOFISH_TAB_H__ const ulong32 rs_tab1[256];

__DECL_TWOFISH_TAB_H__ const ulong32 rs_tab2[256];

__DECL_TWOFISH_TAB_H__ const ulong32 rs_tab3[256];

__DECL_TWOFISH_TAB_H__ const ulong32 rs_tab4[256];

__DECL_TWOFISH_TAB_H__ const ulong32 rs_tab5[256];

__DECL_TWOFISH_TAB_H__ const ulong32 rs_tab6[256];

__DECL_TWOFISH_TAB_H__ const ulong32 rs_tab7[256];

#endif /* LTC_TWOFISH_ALL_TABLES */

#endif

#endif /* __TWOFISH_TAB_H__ */

/* $Source$ */
/* $Revision$ */
/* $Date$ */
