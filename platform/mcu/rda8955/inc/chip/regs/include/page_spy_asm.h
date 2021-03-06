/* Copyright (C) 2016 RDA Technologies Limited and/or its affiliates("RDA").
* All rights reserved.
*
* This software is supplied "AS IS" without any warranties.
* RDA assumes no responsibility or liability for the use of the software,
* conveys no license or title under any patent, copyright, or mask work
* right to the product. RDA reserves the right to make changes in the
* software without notification.  RDA also make no representation or
* warranty that such application will be suitable for the specified use
* without further testing or modification.
*/


#ifndef _PAGE_SPY_ASM_H_
#define _PAGE_SPY_ASM_H_

//THIS FILE HAS BEEN GENERATED WITH COOLWATCHER. PLEASE EDIT WITH CARE !

#ifndef CT_ASM
#error "You are trying to use in a normal C code the assembly H description of 'page_spy'."
#endif

#include "globals_asm.h"

#define PAGE_SPY_NB_PAGE                        (16)

//==============================================================================
// page_spy
//------------------------------------------------------------------------------
///
//==============================================================================
#define REG_PAGE_SPY_BASE          0x01A0C000

#define REG_PAGE_SPY_BASE_HI       BASE_HI(REG_PAGE_SPY_BASE)
#define REG_PAGE_SPY_BASE_LO       BASE_LO(REG_PAGE_SPY_BASE)

#define REG_PAGE_SPY_ENABLE        REG_PAGE_SPY_BASE_LO + 0x00000000
#define REG_PAGE_SPY_STATUS        REG_PAGE_SPY_BASE_LO + 0x00000004
#define REG_PAGE_SPY_DISABLE       REG_PAGE_SPY_BASE_LO + 0x00000008
#define REG_PAGE_SPY_PAGE_0_START  REG_PAGE_SPY_BASE_LO + 0x00000010
#define REG_PAGE_SPY_PAGE_0_END    REG_PAGE_SPY_BASE_LO + 0x00000014
#define REG_PAGE_SPY_PAGE_0_MASTER REG_PAGE_SPY_BASE_LO + 0x00000018
#define REG_PAGE_SPY_PAGE_0_ADDR   REG_PAGE_SPY_BASE_LO + 0x0000001C
#define REG_PAGE_SPY_PAGE_1_START  REG_PAGE_SPY_BASE_LO + 0x00000020
#define REG_PAGE_SPY_PAGE_1_END    REG_PAGE_SPY_BASE_LO + 0x00000024
#define REG_PAGE_SPY_PAGE_1_MASTER REG_PAGE_SPY_BASE_LO + 0x00000028
#define REG_PAGE_SPY_PAGE_1_ADDR   REG_PAGE_SPY_BASE_LO + 0x0000002C
#define REG_PAGE_SPY_PAGE_2_START  REG_PAGE_SPY_BASE_LO + 0x00000030
#define REG_PAGE_SPY_PAGE_2_END    REG_PAGE_SPY_BASE_LO + 0x00000034
#define REG_PAGE_SPY_PAGE_2_MASTER REG_PAGE_SPY_BASE_LO + 0x00000038
#define REG_PAGE_SPY_PAGE_2_ADDR   REG_PAGE_SPY_BASE_LO + 0x0000003C
#define REG_PAGE_SPY_PAGE_3_START  REG_PAGE_SPY_BASE_LO + 0x00000040
#define REG_PAGE_SPY_PAGE_3_END    REG_PAGE_SPY_BASE_LO + 0x00000044
#define REG_PAGE_SPY_PAGE_3_MASTER REG_PAGE_SPY_BASE_LO + 0x00000048
#define REG_PAGE_SPY_PAGE_3_ADDR   REG_PAGE_SPY_BASE_LO + 0x0000004C
#define REG_PAGE_SPY_PAGE_4_START  REG_PAGE_SPY_BASE_LO + 0x00000050
#define REG_PAGE_SPY_PAGE_4_END    REG_PAGE_SPY_BASE_LO + 0x00000054
#define REG_PAGE_SPY_PAGE_4_MASTER REG_PAGE_SPY_BASE_LO + 0x00000058
#define REG_PAGE_SPY_PAGE_4_ADDR   REG_PAGE_SPY_BASE_LO + 0x0000005C
#define REG_PAGE_SPY_PAGE_5_START  REG_PAGE_SPY_BASE_LO + 0x00000060
#define REG_PAGE_SPY_PAGE_5_END    REG_PAGE_SPY_BASE_LO + 0x00000064
#define REG_PAGE_SPY_PAGE_5_MASTER REG_PAGE_SPY_BASE_LO + 0x00000068
#define REG_PAGE_SPY_PAGE_5_ADDR   REG_PAGE_SPY_BASE_LO + 0x0000006C
#define REG_PAGE_SPY_PAGE_6_START  REG_PAGE_SPY_BASE_LO + 0x00000070
#define REG_PAGE_SPY_PAGE_6_END    REG_PAGE_SPY_BASE_LO + 0x00000074
#define REG_PAGE_SPY_PAGE_6_MASTER REG_PAGE_SPY_BASE_LO + 0x00000078
#define REG_PAGE_SPY_PAGE_6_ADDR   REG_PAGE_SPY_BASE_LO + 0x0000007C
#define REG_PAGE_SPY_PAGE_7_START  REG_PAGE_SPY_BASE_LO + 0x00000080
#define REG_PAGE_SPY_PAGE_7_END    REG_PAGE_SPY_BASE_LO + 0x00000084
#define REG_PAGE_SPY_PAGE_7_MASTER REG_PAGE_SPY_BASE_LO + 0x00000088
#define REG_PAGE_SPY_PAGE_7_ADDR   REG_PAGE_SPY_BASE_LO + 0x0000008C
#define REG_PAGE_SPY_PAGE_8_START  REG_PAGE_SPY_BASE_LO + 0x00000090
#define REG_PAGE_SPY_PAGE_8_END    REG_PAGE_SPY_BASE_LO + 0x00000094
#define REG_PAGE_SPY_PAGE_8_MASTER REG_PAGE_SPY_BASE_LO + 0x00000098
#define REG_PAGE_SPY_PAGE_8_ADDR   REG_PAGE_SPY_BASE_LO + 0x0000009C
#define REG_PAGE_SPY_PAGE_9_START  REG_PAGE_SPY_BASE_LO + 0x000000A0
#define REG_PAGE_SPY_PAGE_9_END    REG_PAGE_SPY_BASE_LO + 0x000000A4
#define REG_PAGE_SPY_PAGE_9_MASTER REG_PAGE_SPY_BASE_LO + 0x000000A8
#define REG_PAGE_SPY_PAGE_9_ADDR   REG_PAGE_SPY_BASE_LO + 0x000000AC
#define REG_PAGE_SPY_PAGE_10_START REG_PAGE_SPY_BASE_LO + 0x000000B0
#define REG_PAGE_SPY_PAGE_10_END   REG_PAGE_SPY_BASE_LO + 0x000000B4
#define REG_PAGE_SPY_PAGE_10_MASTER REG_PAGE_SPY_BASE_LO + 0x000000B8
#define REG_PAGE_SPY_PAGE_10_ADDR  REG_PAGE_SPY_BASE_LO + 0x000000BC
#define REG_PAGE_SPY_PAGE_11_START REG_PAGE_SPY_BASE_LO + 0x000000C0
#define REG_PAGE_SPY_PAGE_11_END   REG_PAGE_SPY_BASE_LO + 0x000000C4
#define REG_PAGE_SPY_PAGE_11_MASTER REG_PAGE_SPY_BASE_LO + 0x000000C8
#define REG_PAGE_SPY_PAGE_11_ADDR  REG_PAGE_SPY_BASE_LO + 0x000000CC
#define REG_PAGE_SPY_PAGE_12_START REG_PAGE_SPY_BASE_LO + 0x000000D0
#define REG_PAGE_SPY_PAGE_12_END   REG_PAGE_SPY_BASE_LO + 0x000000D4
#define REG_PAGE_SPY_PAGE_12_MASTER REG_PAGE_SPY_BASE_LO + 0x000000D8
#define REG_PAGE_SPY_PAGE_12_ADDR  REG_PAGE_SPY_BASE_LO + 0x000000DC
#define REG_PAGE_SPY_PAGE_13_START REG_PAGE_SPY_BASE_LO + 0x000000E0
#define REG_PAGE_SPY_PAGE_13_END   REG_PAGE_SPY_BASE_LO + 0x000000E4
#define REG_PAGE_SPY_PAGE_13_MASTER REG_PAGE_SPY_BASE_LO + 0x000000E8
#define REG_PAGE_SPY_PAGE_13_ADDR  REG_PAGE_SPY_BASE_LO + 0x000000EC
#define REG_PAGE_SPY_PAGE_14_START REG_PAGE_SPY_BASE_LO + 0x000000F0
#define REG_PAGE_SPY_PAGE_14_END   REG_PAGE_SPY_BASE_LO + 0x000000F4
#define REG_PAGE_SPY_PAGE_14_MASTER REG_PAGE_SPY_BASE_LO + 0x000000F8
#define REG_PAGE_SPY_PAGE_14_ADDR  REG_PAGE_SPY_BASE_LO + 0x000000FC
#define REG_PAGE_SPY_PAGE_15_START REG_PAGE_SPY_BASE_LO + 0x00000100
#define REG_PAGE_SPY_PAGE_15_END   REG_PAGE_SPY_BASE_LO + 0x00000104
#define REG_PAGE_SPY_PAGE_15_MASTER REG_PAGE_SPY_BASE_LO + 0x00000108
#define REG_PAGE_SPY_PAGE_15_ADDR  REG_PAGE_SPY_BASE_LO + 0x0000010C

//enable
#define PAGE_SPY_ENABLE_PAGE_0     (1<<0)
#define PAGE_SPY_ENABLE_PAGE_1     (1<<1)
#define PAGE_SPY_ENABLE_PAGE_2     (1<<2)
#define PAGE_SPY_ENABLE_PAGE_3     (1<<3)
#define PAGE_SPY_ENABLE_PAGE_4     (1<<4)
#define PAGE_SPY_ENABLE_PAGE_5     (1<<5)
#define PAGE_SPY_ENABLE_PAGE_6     (1<<6)
#define PAGE_SPY_ENABLE_PAGE_7     (1<<7)
#define PAGE_SPY_ENABLE_PAGE_8     (1<<8)
#define PAGE_SPY_ENABLE_PAGE_9     (1<<9)
#define PAGE_SPY_ENABLE_PAGE_10    (1<<10)
#define PAGE_SPY_ENABLE_PAGE_11    (1<<11)
#define PAGE_SPY_ENABLE_PAGE_12    (1<<12)
#define PAGE_SPY_ENABLE_PAGE_13    (1<<13)
#define PAGE_SPY_ENABLE_PAGE_14    (1<<14)
#define PAGE_SPY_ENABLE_PAGE_15    (1<<15)
#define PAGE_SPY_ENABLE_PAGE(n)    (((n)&0xFFFF)<<0)
#define PAGE_SPY_ENABLE_PAGE_MASK  (0xFFFF<<0)
#define PAGE_SPY_ENABLE_PAGE_SHIFT (0)

//status
#define PAGE_SPY_STATUS_PAGE_0     (1<<0)
#define PAGE_SPY_STATUS_PAGE_0_NOT_HIT (0<<0)
#define PAGE_SPY_STATUS_PAGE_0_HIT (1<<0)
#define PAGE_SPY_STATUS_PAGE_1     (1<<1)
#define PAGE_SPY_STATUS_PAGE_1_NOT_HIT (0<<1)
#define PAGE_SPY_STATUS_PAGE_1_HIT (1<<1)
#define PAGE_SPY_STATUS_PAGE_2     (1<<2)
#define PAGE_SPY_STATUS_PAGE_2_NOT_HIT (0<<2)
#define PAGE_SPY_STATUS_PAGE_2_HIT (1<<2)
#define PAGE_SPY_STATUS_PAGE_3     (1<<3)
#define PAGE_SPY_STATUS_PAGE_3_NOT_HIT (0<<3)
#define PAGE_SPY_STATUS_PAGE_3_HIT (1<<3)
#define PAGE_SPY_STATUS_PAGE_4     (1<<4)
#define PAGE_SPY_STATUS_PAGE_4_NOT_HIT (0<<4)
#define PAGE_SPY_STATUS_PAGE_4_HIT (1<<4)
#define PAGE_SPY_STATUS_PAGE_5     (1<<5)
#define PAGE_SPY_STATUS_PAGE_5_NOT_HIT (0<<5)
#define PAGE_SPY_STATUS_PAGE_5_HIT (1<<5)
#define PAGE_SPY_STATUS_PAGE_6     (1<<6)
#define PAGE_SPY_STATUS_PAGE_6_NOT_HIT (0<<6)
#define PAGE_SPY_STATUS_PAGE_6_HIT (1<<6)
#define PAGE_SPY_STATUS_PAGE_7     (1<<7)
#define PAGE_SPY_STATUS_PAGE_7_NOT_HIT (0<<7)
#define PAGE_SPY_STATUS_PAGE_7_HIT (1<<7)
#define PAGE_SPY_STATUS_PAGE_8     (1<<8)
#define PAGE_SPY_STATUS_PAGE_8_NOT_HIT (0<<8)
#define PAGE_SPY_STATUS_PAGE_8_HIT (1<<8)
#define PAGE_SPY_STATUS_PAGE_9     (1<<9)
#define PAGE_SPY_STATUS_PAGE_9_NOT_HIT (0<<9)
#define PAGE_SPY_STATUS_PAGE_9_HIT (1<<9)
#define PAGE_SPY_STATUS_PAGE_10    (1<<10)
#define PAGE_SPY_STATUS_PAGE_10_NOT_HIT (0<<10)
#define PAGE_SPY_STATUS_PAGE_10_HIT (1<<10)
#define PAGE_SPY_STATUS_PAGE_11    (1<<11)
#define PAGE_SPY_STATUS_PAGE_11_NOT_HIT (0<<11)
#define PAGE_SPY_STATUS_PAGE_11_HIT (1<<11)
#define PAGE_SPY_STATUS_PAGE_12    (1<<12)
#define PAGE_SPY_STATUS_PAGE_12_NOT_HIT (0<<12)
#define PAGE_SPY_STATUS_PAGE_12_HIT (1<<12)
#define PAGE_SPY_STATUS_PAGE_13    (1<<13)
#define PAGE_SPY_STATUS_PAGE_13_NOT_HIT (0<<13)
#define PAGE_SPY_STATUS_PAGE_13_HIT (1<<13)
#define PAGE_SPY_STATUS_PAGE_14    (1<<14)
#define PAGE_SPY_STATUS_PAGE_14_NOT_HIT (0<<14)
#define PAGE_SPY_STATUS_PAGE_14_HIT (1<<14)
#define PAGE_SPY_STATUS_PAGE_15    (1<<15)
#define PAGE_SPY_STATUS_PAGE_15_NOT_HIT (0<<15)
#define PAGE_SPY_STATUS_PAGE_15_HIT (1<<15)
#define PAGE_SPY_STATUS_PAGE(n)    (((n)&0xFFFF)<<0)
#define PAGE_SPY_STATUS_PAGE_MASK  (0xFFFF<<0)
#define PAGE_SPY_STATUS_PAGE_SHIFT (0)

//disable
#define PAGE_SPY_DISABLE_PAGE_0    (1<<0)
#define PAGE_SPY_DISABLE_PAGE_1    (1<<1)
#define PAGE_SPY_DISABLE_PAGE_2    (1<<2)
#define PAGE_SPY_DISABLE_PAGE_3    (1<<3)
#define PAGE_SPY_DISABLE_PAGE_4    (1<<4)
#define PAGE_SPY_DISABLE_PAGE_5    (1<<5)
#define PAGE_SPY_DISABLE_PAGE_6    (1<<6)
#define PAGE_SPY_DISABLE_PAGE_7    (1<<7)
#define PAGE_SPY_DISABLE_PAGE_8    (1<<8)
#define PAGE_SPY_DISABLE_PAGE_9    (1<<9)
#define PAGE_SPY_DISABLE_PAGE_10   (1<<10)
#define PAGE_SPY_DISABLE_PAGE_11   (1<<11)
#define PAGE_SPY_DISABLE_PAGE_12   (1<<12)
#define PAGE_SPY_DISABLE_PAGE_13   (1<<13)
#define PAGE_SPY_DISABLE_PAGE_14   (1<<14)
#define PAGE_SPY_DISABLE_PAGE_15   (1<<15)
#define PAGE_SPY_DISABLE_PAGE(n)   (((n)&0xFFFF)<<0)
#define PAGE_SPY_DISABLE_PAGE_MASK (0xFFFF<<0)
#define PAGE_SPY_DISABLE_PAGE_SHIFT (0)

//start
#define PAGE_SPY_START_ADDRESS(n)  (((n)&0x3FFFFFF)<<0)
#define PAGE_SPY_DETECT_READ       (1<<30)
#define PAGE_SPY_DETECT_WRITE      (1<<31)
#define PAGE_SPY_MODE(n)           (((n)&3)<<30)
#define PAGE_SPY_MODE_MASK         (3<<30)
#define PAGE_SPY_MODE_SHIFT        (30)

//end
#define PAGE_SPY_END_ADDRESS(n)    (((n)&0x3FFFFFF)<<0)

//master
#define PAGE_SPY_MASTER(n)         (((n)&7)<<0)
#define PAGE_SPY_MASTER_NO_ACCESS  (0<<0)
#define PAGE_SPY_MASTER_BIST       (1<<0)
#define PAGE_SPY_MASTER_DMA        (2<<0)
#define PAGE_SPY_MASTER_SYS_XCPU   (3<<0)
#define PAGE_SPY_MASTER_AHB2AHB    (4<<0)
#define PAGE_SPY_MASTER_IFC        (5<<0)
#define PAGE_SPY_MASTER_USB        (6<<0)

//addr
#define PAGE_SPY_HIT_ADDR(n)       (((n)&0x1FFFFFF)<<0)
#define PAGE_SPY_HIT_READ          (1<<30)
#define PAGE_SPY_HIT_WRITE         (1<<31)




#endif
