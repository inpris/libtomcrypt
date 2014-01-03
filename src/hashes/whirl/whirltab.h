#ifndef __WHIRLTAB_H__
#define __WHIRLTAB_H__
#ifndef __DECL_WHIRLTAB_H__
#define __DECL_WHIRLTAB_H__ extern
#endif

/**
   @file whirltab.h
   LTC_WHIRLPOOL tables, Tom St Denis
*/
__DECL_WHIRLTAB_H__ const ulong64 sbox0[];

#ifdef LTC_SMALL_CODE

#define SB0(x) sbox0[x]
#define SB1(x) ROR64c(sbox0[x], 8)
#define SB2(x) ROR64c(sbox0[x], 16)
#define SB3(x) ROR64c(sbox0[x], 24)
#define SB4(x) ROR64c(sbox0[x], 32)
#define SB5(x) ROR64c(sbox0[x], 40)
#define SB6(x) ROR64c(sbox0[x], 48)
#define SB7(x) ROR64c(sbox0[x], 56)

#else

#define SB0(x) sbox0[x]
#define SB1(x) sbox1[x]
#define SB2(x) sbox2[x]
#define SB3(x) sbox3[x]
#define SB4(x) sbox4[x]
#define SB5(x) sbox5[x]
#define SB6(x) sbox6[x]
#define SB7(x) sbox7[x]


__DECL_WHIRLTAB_H__ const ulong64 sbox1[256];

__DECL_WHIRLTAB_H__ const ulong64 sbox2[256];

__DECL_WHIRLTAB_H__ const ulong64 sbox3[256];

__DECL_WHIRLTAB_H__ const ulong64 sbox4[256];

__DECL_WHIRLTAB_H__ const ulong64 sbox5[256];

__DECL_WHIRLTAB_H__ const ulong64 sbox6[256];

__DECL_WHIRLTAB_H__ const ulong64 sbox7[256];

#endif

__DECL_WHIRLTAB_H__ const ulong64 cont[11];

#endif /* __WHIRLTAB_H__ */


/* $Source$ */
/* $Revision$ */
/* $Date$ */
