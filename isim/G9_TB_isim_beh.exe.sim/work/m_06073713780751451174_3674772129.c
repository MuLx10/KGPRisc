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
static const char *ng0 = "%t: Write_reg %b Write Data %b";
static const char *ng1 = "%t: Read Values1 RF(%d)  %b ";
static const char *ng2 = "%t: Read Values2 RF(%d)  %b ";
static const char *ng3 = "/home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/KGP_Risc/RegisterFile.v";
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};

static void Monitor_55_2(char *);
static void Monitor_56_3(char *);
static void Monitor_57_4(char *);


static void Monitor_55_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1344U);
    t4 = *((char **)t3);
    t3 = (t0 + 1664U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 2, ng0, 4, t0, (char)118, t1, 64, (char)118, t4, 1, (char)118, t5, 32);

LAB1:    return;
}

static void Monitor_56_3(char *t0)
{
    char t1[16];
    char t7[8];
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

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2704);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2704);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1824U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 5, 2);
    xsi_vlogfile_write(1, 0, 2, ng1, 4, t0, (char)118, t1, 64, (char)118, t4, 5, (char)118, t7, 32);

LAB1:    return;
}

static void Monitor_57_4(char *t0)
{
    char t1[16];
    char t7[8];
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

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1984U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2704);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2704);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1984U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 5, 2);
    xsi_vlogfile_write(1, 0, 2, ng2, 4, t0, (char)118, t1, 64, (char)118, t4, 5, (char)118, t7, 32);

LAB1:    return;
}

static void Initial_44_0(char *t0)
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

LAB0:    xsi_set_current_line(44, ng3);

LAB2:    xsi_set_current_line(45, ng3);
    xsi_set_current_line(45, ng3);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2864);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 472);
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
LAB4:    xsi_set_current_line(46, ng3);
    t12 = (t0 + 2864);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2704);
    t18 = (t0 + 2704);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2704);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2864);
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

LAB7:    xsi_set_current_line(45, ng3);
    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB6:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB7;

}

static void Always_48_1(char *t0)
{
    char t7[8];
    char t21[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    int t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;

LAB0:    t1 = (t0 + 4024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng3);
    t2 = (t0 + 4344);
    *((int *)t2) = 1;
    t3 = (t0 + 4056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng3);

LAB5:    xsi_set_current_line(50, ng3);
    t4 = (t0 + 2704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2704);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2704);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1984U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 5, 2);
    t14 = (t0 + 2544);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    xsi_set_current_line(51, ng3);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2704);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2704);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1824U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t7, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2384);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 32);
    xsi_set_current_line(52, ng3);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(55, ng3);
    t2 = (t0 + 3832);
    xsi_vlog_strobe(0, (void *)Monitor_55_2, t2);
    xsi_set_current_line(56, ng3);
    t2 = (t0 + 3832);
    xsi_vlog_strobe(0, (void *)Monitor_56_3, t2);
    xsi_set_current_line(57, ng3);
    t2 = (t0 + 3832);
    xsi_vlog_strobe(0, (void *)Monitor_57_4, t2);
    goto LAB2;

LAB6:    xsi_set_current_line(53, ng3);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    t4 = (t0 + 2704);
    t6 = (t0 + 2704);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2704);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1504U);
    t14 = *((char **)t13);
    xsi_vlog_generic_convert_array_indices(t7, t21, t9, t12, 2, 1, t14, 5, 2);
    t13 = (t7 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (!(t22));
    t15 = (t21 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (!(t24));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t21);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t21), t30);
    goto LAB10;

}


extern void work_m_06073713780751451174_3674772129_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Always_48_1};
	xsi_register_didat("work_m_06073713780751451174_3674772129", "isim/G9_TB_isim_beh.exe.sim/work/m_06073713780751451174_3674772129.didat");
	xsi_register_executes(pe);
}
