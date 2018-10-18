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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "%t: opcode:  %b ";
static const char *ng1 = "%t: instr   %b";
static const char *ng2 = "/home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/KGP_Risc/ControlUnit.v";
static int ng3[] = {0, 0};
static unsigned int ng4[] = {7U, 0U};
static unsigned int ng7[] = {12U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {13U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {14U, 0U};
static unsigned int ng13[] = {0U, 0U};
static unsigned int ng14[] = {16U, 0U};
static unsigned int ng15[] = {17U, 0U};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {18U, 0U};
static unsigned int ng18[] = {8U, 0U};
static int ng19[] = {1, 0};
static unsigned int ng20[] = {9U, 0U};
static unsigned int ng21[] = {2U, 0U};
static unsigned int ng22[] = {3U, 0U};
static unsigned int ng23[] = {20U, 0U};
static unsigned int ng24[] = {21U, 0U};
static unsigned int ng25[] = {22U, 0U};
static unsigned int ng26[] = {23U, 0U};
static unsigned int ng27[] = {24U, 0U};
static unsigned int ng28[] = {25U, 0U};
static unsigned int ng29[] = {26U, 0U};
static unsigned int ng30[] = {27U, 0U};
static unsigned int ng31[] = {28U, 0U};
static unsigned int ng32[] = {29U, 0U};
static unsigned int ng33[] = {30U, 0U};
static unsigned int ng34[] = {31U, 0U};

static void Monitor_73_2(char *);
static void Monitor_74_3(char *);


static void Monitor_73_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 2, ng0, 3, t0, (char)118, t1, 64, (char)118, t4, 1);

LAB1:    return;
}

static void Monitor_74_3(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 2, ng1, 3, t0, (char)118, t1, 64, (char)118, t4, 32);

LAB1:    return;
}

static void Cont_68_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 26);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 26);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 63U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 63U);
    t12 = (t0 + 5904);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 5808);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_69_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng2);
    t2 = (t0 + 5824);
    *((int *)t2) = 1;
    t3 = (t0 + 5520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng2);

LAB5:    xsi_set_current_line(71, ng2);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(73, ng2);
    t2 = (t0 + 5296);
    xsi_vlog_strobe(0, (void *)Monitor_73_2, t2);
    xsi_set_current_line(74, ng2);
    t2 = (t0 + 5296);
    xsi_vlog_strobe(0, (void *)Monitor_74_3, t2);
    xsi_set_current_line(75, ng2);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 26);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 26);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 63U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 63U);

LAB6:    t5 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t5, 6);
    if (t13 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng20)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng22)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng23)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng24)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng25)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng26)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng27)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng28)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng29)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng30)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng31)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng32)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng33)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng34)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB57;

LAB58:
LAB60:
LAB59:    xsi_set_current_line(228, ng2);

LAB88:    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(229, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB61:    goto LAB2;

LAB7:    xsi_set_current_line(77, ng2);

LAB62:    xsi_set_current_line(78, ng2);
    t14 = ((char*)((ng8)));
    t15 = (t0 + 2088);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    xsi_set_current_line(79, ng2);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(80, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB9:    xsi_set_current_line(83, ng2);

LAB63:    xsi_set_current_line(84, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(85, ng2);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(86, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB11:    xsi_set_current_line(89, ng2);

LAB64:    xsi_set_current_line(90, ng2);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(91, ng2);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(92, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB13:    xsi_set_current_line(96, ng2);

LAB65:    xsi_set_current_line(97, ng2);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(98, ng2);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(99, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB15:    xsi_set_current_line(102, ng2);

LAB66:    xsi_set_current_line(103, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(104, ng2);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(105, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB17:    xsi_set_current_line(108, ng2);

LAB67:    xsi_set_current_line(109, ng2);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(110, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB19:    xsi_set_current_line(115, ng2);

LAB68:    xsi_set_current_line(116, ng2);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(117, ng2);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng2);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

LAB21:    xsi_set_current_line(122, ng2);

LAB69:    xsi_set_current_line(123, ng2);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(124, ng2);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

LAB23:    xsi_set_current_line(129, ng2);

LAB70:    xsi_set_current_line(130, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(131, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

LAB25:    xsi_set_current_line(135, ng2);

LAB71:    xsi_set_current_line(136, ng2);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(137, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

LAB27:    xsi_set_current_line(141, ng2);

LAB72:    xsi_set_current_line(142, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(143, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(144, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

LAB29:    xsi_set_current_line(147, ng2);

LAB73:    xsi_set_current_line(148, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(149, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(150, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

LAB31:    xsi_set_current_line(154, ng2);

LAB74:    xsi_set_current_line(155, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(156, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(157, ng2);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

LAB33:    xsi_set_current_line(160, ng2);

LAB75:    xsi_set_current_line(161, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(162, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(163, ng2);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

LAB35:    xsi_set_current_line(167, ng2);

LAB76:    xsi_set_current_line(168, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(169, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB37:    xsi_set_current_line(172, ng2);

LAB77:    xsi_set_current_line(173, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(174, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

LAB39:    xsi_set_current_line(178, ng2);

LAB78:    xsi_set_current_line(179, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(180, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB41:    xsi_set_current_line(183, ng2);

LAB79:    xsi_set_current_line(184, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(185, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB43:    xsi_set_current_line(188, ng2);

LAB80:    xsi_set_current_line(189, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(190, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB45:    xsi_set_current_line(193, ng2);

LAB81:    xsi_set_current_line(194, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(195, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB47:    xsi_set_current_line(198, ng2);

LAB82:    xsi_set_current_line(199, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(200, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB49:    xsi_set_current_line(203, ng2);

LAB83:    xsi_set_current_line(204, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(205, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB51:    xsi_set_current_line(208, ng2);

LAB84:    xsi_set_current_line(209, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(210, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB53:    xsi_set_current_line(213, ng2);

LAB85:    xsi_set_current_line(214, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(215, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB61;

LAB55:    xsi_set_current_line(218, ng2);

LAB86:    xsi_set_current_line(219, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4168);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(220, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

LAB57:    xsi_set_current_line(223, ng2);

LAB87:    xsi_set_current_line(224, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4328);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(225, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB61;

}


extern void work_m_02600146693426429857_1938225339_init()
{
	static char *pe[] = {(void *)Cont_68_0,(void *)Always_69_1};
	xsi_register_didat("work_m_02600146693426429857_1938225339", "isim/G9_TB_isim_beh.exe.sim/work/m_02600146693426429857_1938225339.didat");
	xsi_register_executes(pe);
}
