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
static const char *ng0 = "/home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/KGP_Risc/InstructionMemory.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};



static void Initial_29_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t17[8];
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
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2520);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2520);
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

LAB5:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2360);
    t3 = (t0 + 2360);
    t4 = (t3 + 72U);
    t5 = *((char **)t4);
    t12 = (t0 + 2360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t16, t5, t14, 2, 1, t15, 32, 1);
    t18 = (t6 + 4);
    t7 = *((unsigned int *)t18);
    t29 = (!(t7));
    t19 = (t16 + 4);
    t8 = *((unsigned int *)t19);
    t32 = (!(t8));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB8;

LAB9:
LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);
    t12 = (t0 + 2520);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2360);
    t18 = (t0 + 2360);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2360);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2520);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2520);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 2520);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB6:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB7;

LAB8:    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t16);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t16), t37);
    goto LAB9;

}

static void Always_37_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2360);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2360);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1640U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 32, 2);
    t14 = (t0 + 2200);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB2;

}


extern void work_m_06416105888762881982_2138213552_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_37_1};
	xsi_register_didat("work_m_06416105888762881982_2138213552", "isim/G9_TB_isim_beh.exe.sim/work/m_06416105888762881982_2138213552.didat");
	xsi_register_executes(pe);
}
