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
static const char *ng0 = "%t: DMEM3: %b ";
static unsigned int ng1[] = {5U, 0U};
static const char *ng2 = "/home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/KGP_Risc/DataMemory.v";
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};

static void Monitor_46_2(char *);


static void Monitor_46_2(char *t0)
{
    char t1[16];
    char t6[8];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2520);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2520);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t9, t12, 2, 1, t13, 32, 2);
    xsi_vlogfile_write(1, 0, 2, ng0, 3, t0, (char)118, t1, 64, (char)118, t6, 32);

LAB1:    return;
}

static void Initial_32_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
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
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(33, ng2);

LAB2:    xsi_set_current_line(36, ng2);
    xsi_set_current_line(36, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2680);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(37, ng2);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 2520);
    t16 = (t0 + 2520);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2520);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2680);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng2);
    t1 = (t0 + 2680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 2680);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Always_40_1(char *t0)
{
    char t14[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t24;
    int t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 3840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng2);
    t2 = (t0 + 4160);
    *((int *)t2) = 1;
    t3 = (t0 + 3872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng2);

LAB5:    xsi_set_current_line(42, ng2);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(44, ng2);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(46, ng2);
    t2 = (t0 + 3648);
    xsi_vlog_strobe(0, (void *)Monitor_46_2, t2);
    goto LAB2;

LAB6:    xsi_set_current_line(43, ng2);
    t11 = (t0 + 2520);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2520);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2520);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1480U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t14, 32, t13, t17, t20, 2, 1, t22, 32, 2);
    t21 = (t0 + 2360);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 32);
    goto LAB8;

LAB9:    xsi_set_current_line(45, ng2);
    t4 = (t0 + 1960U);
    t5 = *((char **)t4);
    t4 = (t0 + 2520);
    t11 = (t0 + 2520);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t15 = (t0 + 2520);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 1480U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t14, t23, t13, t17, 2, 1, t19, 32, 2);
    t18 = (t14 + 4);
    t24 = *((unsigned int *)t18);
    t25 = (!(t24));
    t20 = (t23 + 4);
    t26 = *((unsigned int *)t20);
    t27 = (!(t26));
    t28 = (t25 && t27);
    if (t28 == 1)
        goto LAB12;

LAB13:    goto LAB11;

LAB12:    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t23);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t23), t32);
    goto LAB13;

}


extern void work_m_16853334319368159758_2461264495_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Always_40_1};
	xsi_register_didat("work_m_16853334319368159758_2461264495", "isim/DMem_TB_isim_beh.exe.sim/work/m_16853334319368159758_2461264495.didat");
	xsi_register_executes(pe);
}
