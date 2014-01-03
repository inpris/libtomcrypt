#ifndef __SAFER_TAB_H__
#define __SAFER_TAB_H__
#ifndef __DECL_SAFER_TAB_H__
#define __DECL_SAFER_TAB_H__ extern
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
  @file safer_tab.h
  Tables for LTC_SAFER block ciphers
*/

#include "tomcrypt.h"

#if defined(LTC_SAFERP) || defined(LTC_SAFER)

/* This is the box defined by ebox[x] = 45^x mod 257.
 * Its assumed that the value "256" corresponds to zero. */
__DECL_SAFER_TAB_H__ const unsigned char safer_ebox[256];

/* This is the inverse of ebox or the base 45 logarithm */
__DECL_SAFER_TAB_H__ const unsigned char safer_lbox[256];

#endif

#endif /* __SAFER_TAB_H__ */



/* $Source$ */
/* $Revision$ */
/* $Date$ */
