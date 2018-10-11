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
static const char *ng0 = "%t: IMem %b  %d ";
static int ng1[] = {2, 0};
static const char *ng2 = "/home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/G9Processor/InstructionMemory.v";
static int ng3[] = {0, 0};
static unsigned int ng4[] = {6422531U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {0U, 0U};

static void Monitor_49_3(char *);


static void Monitor_49_3(char *t0)
{
    char t1[16];
    char t6[8];
    char t17[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2360);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2360);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2360);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2360);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t0 + 2360);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2360);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t17, 32, t16, t20, t23, 2, 1, t24, 32, 1);
    xsi_vlogfile_write(1, 0, 2, ng0, 4, t0, (char)118, t1, 64, (char)118, t6, 32, (char)118, t17, 32);

LAB1:    return;
}

static void Initial_35_0(char *t0)
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

LAB0:    xsi_set_current_line(36, ng2);

LAB2:    xsi_set_current_line(38, ng2);
    xsi_set_current_line(38, ng2);
    t1 = ((char*)((ng3)));
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

LAB5:    xsi_set_current_line(40, ng2);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2360);
    t3 = (t0 + 2360);
    t4 = (t3 + 72U);
    t5 = *((char **)t4);
    t12 = (t0 + 2360);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t14, t5, t16, 2, 1, t17, 32, 1);
    t18 = (t6 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB8;

LAB9:
LAB1:    return;
LAB4:    xsi_set_current_line(39, ng2);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 2360);
    t16 = (t0 + 2360);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2360);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2520);
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

LAB7:    xsi_set_current_line(38, ng2);
    t1 = (t0 + 2520);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 2520);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

LAB8:    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB9;

}

static void Always_43_1(char *t0)
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

LAB2:    xsi_set_current_line(43, ng2);
    t2 = (t0 + 4248);
    *((int *)t2) = 1;
    t3 = (t0 + 3712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng2);

LAB5:    xsi_set_current_line(45, ng2);
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

static void Always_48_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng2);
    t2 = (t0 + 4264);
    *((int *)t2) = 1;
    t3 = (t0 + 3960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng2);

LAB5:    xsi_set_current_line(49, ng2);
    t4 = (t0 + 3736);
    xsi_vlog_strobe(0, (void *)Monitor_49_3, t4);
    goto LAB2;

}


extern void work_m_06416105888762881982_2138213552_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_43_1,(void *)Always_48_2};
	xsi_register_didat("work_m_06416105888762881982_2138213552", "isim/IMem_TB_isim_beh.exe.sim/work/m_06416105888762881982_2138213552.didat");
	xsi_register_executes(pe);
}
