/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Oren Collaco/Documents/GitHub/WavGen/WaveGenModule1.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_3908131327_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3054470350_3212880686_p_0(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng0);
    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t5 = t1;
    memset(t5, (unsigned char)2, 24U);
    t6 = (t0 + 7432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 24U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(69, ng0);
    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t2 = t1;
    memset(t2, (unsigned char)2, 24U);
    t5 = (t0 + 7496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 7560);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(71, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t5 = (t0 + 7624);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(72, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 7688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(73, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 7752);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(74, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t5 = (t0 + 7816);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(75, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 7880);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t2 = (t0 + 12608U);
    t4 = ieee_p_3620187407_sub_3908131327_3965413181(IEEE_P_3620187407, t5, t2, 1250000);
    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 12608U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t14 + 12U);
    t15 = *((unsigned int *)t6);
    t16 = (1U * t15);
    t3 = (24U != t16);
    if (t3 == 1)
        goto LAB10;

LAB11:    t7 = (t0 + 7496);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 24U);
    xsi_driver_first_trans_fast(t7);

LAB8:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 12640U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t14 + 12U);
    t15 = *((unsigned int *)t6);
    t16 = (1U * t15);
    t3 = (24U != t16);
    if (t3 == 1)
        goto LAB12;

LAB13:    t7 = (t0 + 7432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 24U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 12640U);
    t5 = (t0 + 3752U);
    t6 = *((char **)t5);
    t5 = (t0 + 12656U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB3;

LAB7:    xsi_set_current_line(79, ng0);
    t6 = (t0 + 2152U);
    t7 = *((char **)t6);
    t11 = *((unsigned char *)t7);
    t12 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t11);
    t6 = (t0 + 7560);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t12;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(80, ng0);
    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t2 = t1;
    memset(t2, (unsigned char)2, 24U);
    t5 = (t0 + 7496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    goto LAB8;

LAB10:    xsi_size_not_matching(24U, t16, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(24U, t16, 0);
    goto LAB13;

LAB14:    xsi_set_current_line(86, ng0);
    t7 = xsi_get_transient_memory(24U);
    memset(t7, 0, 24U);
    t8 = t7;
    memset(t8, (unsigned char)2, 24U);
    t9 = (t0 + 7432);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 24U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 12624U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t14 + 12U);
    t15 = *((unsigned int *)t6);
    t16 = (1U * t15);
    t3 = (5U != t16);
    if (t3 == 1)
        goto LAB17;

LAB18:    t7 = (t0 + 7624);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 7944);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_size_not_matching(5U, t16, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 12544U);
    t6 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t5, t1, 1);
    t7 = (t14 + 12U);
    t15 = *((unsigned int *)t7);
    t16 = (1U * t15);
    t11 = (4U != t16);
    if (t11 == 1)
        goto LAB22;

LAB23:    t8 = (t0 + 7688);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t6, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 12544U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 3);
    if (t3 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB20;

LAB22:    xsi_size_not_matching(4U, t16, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(93, ng0);
    t5 = xsi_get_transient_memory(4U);
    memset(t5, 0, 4U);
    t6 = t5;
    memset(t6, (unsigned char)2, 4U);
    t7 = (t0 + 7688);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 12560U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 0);
    if (t3 != 0)
        goto LAB27;

LAB29:
LAB28:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 12560U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 1);
    if (t3 != 0)
        goto LAB37;

LAB39:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 12560U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 2);
    if (t3 != 0)
        goto LAB47;

LAB48:
LAB38:    goto LAB25;

LAB27:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 3112U);
    t6 = *((char **)t5);
    t5 = (t0 + 12592U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t6, t5, 1);
    t8 = (t14 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    t4 = (4U != t16);
    if (t4 == 1)
        goto LAB30;

LAB31:    t9 = (t0 + 7880);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 12592U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 0);
    if (t3 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB28;

LAB30:    xsi_size_not_matching(4U, t16, 0);
    goto LAB31;

LAB32:    xsi_set_current_line(97, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t5 = (t0 + 12560U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t6, t5, 1);
    t8 = (t14 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    t4 = (4U != t16);
    if (t4 == 1)
        goto LAB35;

LAB36:    t9 = (t0 + 7752);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(98, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 7880);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB33;

LAB35:    xsi_size_not_matching(4U, t16, 0);
    goto LAB36;

LAB37:    xsi_set_current_line(102, ng0);
    t5 = (t0 + 2952U);
    t6 = *((char **)t5);
    t5 = (t0 + 12576U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t6, t5, 1);
    t8 = (t14 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    t4 = (3U != t16);
    if (t4 == 1)
        goto LAB40;

LAB41:    t9 = (t0 + 7816);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 3U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 12576U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 7);
    if (t3 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB38;

LAB40:    xsi_size_not_matching(3U, t16, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(104, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t5 = (t0 + 12560U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t6, t5, 1);
    t8 = (t14 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    t4 = (4U != t16);
    if (t4 == 1)
        goto LAB45;

LAB46:    t9 = (t0 + 7752);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB43;

LAB45:    xsi_size_not_matching(4U, t16, 0);
    goto LAB46;

LAB47:    xsi_set_current_line(107, ng0);
    t5 = (t0 + 3112U);
    t6 = *((char **)t5);
    t5 = (t0 + 12592U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t6, t5, 1);
    t8 = (t14 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    t4 = (4U != t16);
    if (t4 == 1)
        goto LAB49;

LAB50:    t9 = (t0 + 7880);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 12592U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 0);
    if (t3 != 0)
        goto LAB51;

LAB53:
LAB52:    goto LAB38;

LAB49:    xsi_size_not_matching(4U, t16, 0);
    goto LAB50;

LAB51:    xsi_set_current_line(109, ng0);
    t5 = xsi_get_transient_memory(4U);
    memset(t5, 0, 4U);
    t6 = t5;
    memset(t6, (unsigned char)2, 4U);
    t7 = (t0 + 7880);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(110, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 7752);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(111, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t5 = (t0 + 7816);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 7944);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB52;

}

static void work_a_3054470350_3212880686_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2112U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7288);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(123, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, 24, 24);
    t6 = (t0 + 8008);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 24U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(124, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t6 = (t0 + 8072);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB12;

LAB13:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB17:
LAB8:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 12672U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 3);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB3;

LAB7:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3912U);
    t7 = *((char **)t2);
    t2 = (t0 + 12672U);
    t8 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t5, t7, t2, 1);
    t9 = (t5 + 12U);
    t12 = *((unsigned int *)t9);
    t13 = (1U * t12);
    t14 = (2U != t13);
    if (t14 == 1)
        goto LAB10;

LAB11:    t10 = (t0 + 8072);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 2U);
    xsi_driver_first_trans_fast(t10);
    goto LAB8;

LAB10:    xsi_size_not_matching(2U, t13, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 3752U);
    t6 = *((char **)t1);
    t1 = (t0 + 12656U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t5, t6, t1, 10000);
    t8 = (t5 + 12U);
    t12 = *((unsigned int *)t8);
    t13 = (1U * t12);
    t11 = (24U != t13);
    if (t11 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 8008);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 24U);
    xsi_driver_first_trans_fast(t9);
    goto LAB8;

LAB14:    xsi_size_not_matching(24U, t13, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 3752U);
    t6 = *((char **)t1);
    t1 = (t0 + 12656U);
    t7 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t5, t6, t1, 10000);
    t8 = (t5 + 12U);
    t12 = *((unsigned int *)t8);
    t13 = (1U * t12);
    t11 = (24U != t13);
    if (t11 == 1)
        goto LAB18;

LAB19:    t9 = (t0 + 8008);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 24U);
    xsi_driver_first_trans_fast(t9);
    goto LAB8;

LAB18:    xsi_size_not_matching(24U, t13, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(135, ng0);
    t6 = xsi_get_transient_memory(2U);
    memset(t6, 0, 2U);
    t7 = t6;
    memset(t7, (unsigned char)2, 2U);
    t8 = (t0 + 8072);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 2U);
    xsi_driver_first_trans_fast(t8);
    goto LAB21;

}

static void work_a_3054470350_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    int t15;
    char *t16;
    int t18;
    char *t19;
    int t21;
    char *t22;
    int t24;
    char *t25;
    int t27;
    char *t28;
    int t30;
    char *t31;
    char *t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 8136);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 7304);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t1 = (t0 + 12560U);
    t6 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t5, t1, 0);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 12560U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 1);
    if (t3 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 12560U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 2);
    if (t3 != 0)
        goto LAB29;

LAB30:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 8136);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(144, ng0);
    t7 = (t0 + 8136);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB6;

LAB8:    xsi_set_current_line(146, ng0);
    t5 = (t0 + 2952U);
    t7 = *((char **)t5);
    t5 = (t0 + 13240);
    t12 = xsi_mem_cmp(t5, t7, 3U);
    if (t12 == 1)
        goto LAB11;

LAB20:    t9 = (t0 + 13243);
    t13 = xsi_mem_cmp(t9, t7, 3U);
    if (t13 == 1)
        goto LAB12;

LAB21:    t11 = (t0 + 13246);
    t15 = xsi_mem_cmp(t11, t7, 3U);
    if (t15 == 1)
        goto LAB13;

LAB22:    t16 = (t0 + 13249);
    t18 = xsi_mem_cmp(t16, t7, 3U);
    if (t18 == 1)
        goto LAB14;

LAB23:    t19 = (t0 + 13252);
    t21 = xsi_mem_cmp(t19, t7, 3U);
    if (t21 == 1)
        goto LAB15;

LAB24:    t22 = (t0 + 13255);
    t24 = xsi_mem_cmp(t22, t7, 3U);
    if (t24 == 1)
        goto LAB16;

LAB25:    t25 = (t0 + 13258);
    t27 = xsi_mem_cmp(t25, t7, 3U);
    if (t27 == 1)
        goto LAB17;

LAB26:    t28 = (t0 + 13261);
    t30 = xsi_mem_cmp(t28, t7, 3U);
    if (t30 == 1)
        goto LAB18;

LAB27:
LAB19:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 8136);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB6;

LAB11:    xsi_set_current_line(147, ng0);
    t31 = (t0 + 4072U);
    t32 = *((char **)t31);
    t33 = (0 - 7);
    t34 = (t33 * -1);
    t35 = (1U * t34);
    t36 = (0 + t35);
    t31 = (t32 + t36);
    t4 = *((unsigned char *)t31);
    t37 = (t0 + 8136);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    *((unsigned char *)t41) = t4;
    xsi_driver_first_trans_fast(t37);
    goto LAB10;

LAB12:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t12 = (1 - 7);
    t34 = (t12 * -1);
    t35 = (1U * t34);
    t36 = (0 + t35);
    t1 = (t2 + t36);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 8136);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB13:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t12 = (2 - 7);
    t34 = (t12 * -1);
    t35 = (1U * t34);
    t36 = (0 + t35);
    t1 = (t2 + t36);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 8136);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB14:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t12 = (3 - 7);
    t34 = (t12 * -1);
    t35 = (1U * t34);
    t36 = (0 + t35);
    t1 = (t2 + t36);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 8136);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB15:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t12 = (4 - 7);
    t34 = (t12 * -1);
    t35 = (1U * t34);
    t36 = (0 + t35);
    t1 = (t2 + t36);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 8136);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB16:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t12 = (5 - 7);
    t34 = (t12 * -1);
    t35 = (1U * t34);
    t36 = (0 + t35);
    t1 = (t2 + t36);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 8136);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB17:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t12 = (6 - 7);
    t34 = (t12 * -1);
    t35 = (1U * t34);
    t36 = (0 + t35);
    t1 = (t2 + t36);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 8136);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB18:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t12 = (7 - 7);
    t34 = (t12 * -1);
    t35 = (1U * t34);
    t36 = (0 + t35);
    t1 = (t2 + t36);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 8136);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB28:;
LAB29:    xsi_set_current_line(158, ng0);
    t5 = (t0 + 8136);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB6;

}

static void work_a_3054470350_3212880686_p_3(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 13264);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t5 = (t0 + 13266);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB8:    t8 = (t0 + 13268);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(174, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 8200);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 7320);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(171, ng0);
    t12 = (t0 + 4232U);
    t13 = *((char **)t12);
    t12 = (t0 + 3432U);
    t14 = *((char **)t12);
    t12 = (t0 + 12624U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t14, t12);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t15);
    t18 = (4U * t17);
    t19 = (0 + t18);
    t20 = (t13 + t19);
    t21 = *((int *)t20);
    t22 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, t21, 8);
    t23 = (t0 + 8200);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t22, 8U);
    xsi_driver_first_trans_fast(t23);
    goto LAB2;

LAB4:    xsi_set_current_line(172, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 12624U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t7 = (t4 - 0);
    t17 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t4);
    t18 = (4U * t17);
    t19 = (0 + t18);
    t5 = (t2 + t19);
    t10 = *((int *)t5);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, t10, 8);
    t8 = (t0 + 8200);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 12624U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t7 = (t4 - 0);
    t17 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t4);
    t18 = (4U * t17);
    t19 = (0 + t18);
    t5 = (t2 + t19);
    t10 = *((int *)t5);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, t10, 8);
    t8 = (t0 + 8200);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB10:;
}

static void work_a_3054470350_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(180, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 8264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7336);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3054470350_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(181, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8328);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7352);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3054470350_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3054470350_3212880686_p_0,(void *)work_a_3054470350_3212880686_p_1,(void *)work_a_3054470350_3212880686_p_2,(void *)work_a_3054470350_3212880686_p_3,(void *)work_a_3054470350_3212880686_p_4,(void *)work_a_3054470350_3212880686_p_5};
	xsi_register_didat("work_a_3054470350_3212880686", "isim/WaveGenModule1_isim_beh.exe.sim/work/a_3054470350_3212880686.didat");
	xsi_register_executes(pe);
}
