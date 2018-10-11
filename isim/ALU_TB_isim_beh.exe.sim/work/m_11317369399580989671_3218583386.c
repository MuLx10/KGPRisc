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
static const char *ng0 = "%t: ALUResult  %b  %d ";
static const char *ng1 = "%t: ALUOP  %b  %d ";
static const char *ng2 = "/home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/G9Processor/ArithmeticLogicUnit.v";
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {1, 0, 0, 0};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {6U, 0U};

static void Monitor_124_2(char *);
static void Monitor_125_3(char *);


static void Monitor_124_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2040);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 2, ng0, 4, t0, (char)118, t1, 64, (char)118, t5, 32, (char)118, t8, 32);

LAB1:    return;
}

static void Monitor_125_3(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1320U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 2, ng1, 4, t0, (char)118, t1, 64, (char)118, t4, 3, (char)118, t5, 3);

LAB1:    return;
}

static void Always_44_0(char *t0)
{
    char t10[16];
    char t12[8];
    char t13[8];
    char t25[8];
    char t29[8];
    char t37[8];
    char t68[8];
    char t84[8];
    char t88[8];
    char t96[8];
    char t128[8];
    char t143[8];
    char t147[8];
    char t161[8];
    char t165[8];
    char t173[8];
    char t205[8];
    char t221[8];
    char t225[8];
    char t233[8];
    char t265[8];
    char t273[8];
    char t309[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t144;
    char *t145;
    char *t146;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t162;
    char *t163;
    char *t164;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    int t197;
    int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    char *t218;
    char *t219;
    char *t220;
    char *t222;
    char *t223;
    char *t224;
    char *t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t232;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    char *t247;
    char *t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    int t257;
    int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t272;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    char *t277;
    char *t278;
    char *t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    char *t287;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    char *t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    char *t307;
    char *t308;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng2);
    t2 = (t0 + 4160);
    *((int *)t2) = 1;
    t3 = (t0 + 3624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng2);

LAB5:    xsi_set_current_line(46, ng2);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(110, ng2);

LAB261:    xsi_set_current_line(111, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(113, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB23:    xsi_set_current_line(118, ng2);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t12, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB263;

LAB262:    t7 = (t2 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB263;

LAB266:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB264;

LAB265:    memset(t13, 0, 8);
    t9 = (t12 + 4);
    t14 = *((unsigned int *)t9);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB267;

LAB268:    if (*((unsigned int *)t9) != 0)
        goto LAB269;

LAB270:    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB271;

LAB272:    memcpy(t37, t13, 8);

LAB273:    memset(t68, 0, 8);
    t69 = (t37 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t37);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB286;

LAB287:    if (*((unsigned int *)t69) != 0)
        goto LAB288;

LAB289:    t76 = (t68 + 4);
    t77 = *((unsigned int *)t68);
    t78 = (!(t77));
    t79 = *((unsigned int *)t76);
    t90 = (t78 || t79);
    if (t90 > 0)
        goto LAB290;

LAB291:    memcpy(t161, t68, 8);

LAB292:    t162 = (t161 + 4);
    t191 = *((unsigned int *)t162);
    t192 = (~(t191));
    t193 = *((unsigned int *)t161);
    t194 = (t193 & t192);
    t195 = (t194 != 0);
    if (t195 > 0)
        goto LAB324;

LAB325:    xsi_set_current_line(121, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB326:    goto LAB2;

LAB7:    xsi_set_current_line(48, ng2);

LAB24:    xsi_set_current_line(49, ng2);
    t7 = (t0 + 1480U);
    t8 = *((char **)t7);
    t7 = (t0 + 1640U);
    t9 = *((char **)t7);
    xsi_vlog_unsigned_add(t10, 33, t8, 32, t9, 32);
    t7 = (t0 + 2040);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    t11 = (t0 + 2200);
    xsi_vlogvar_assign_value(t11, t10, 32, 0, 1);
    xsi_set_current_line(50, ng2);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t12, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB26;

LAB25:    t7 = (t2 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB28;

LAB27:    *((unsigned int *)t12) = 1;

LAB28:    memset(t13, 0, 8);
    t9 = (t12 + 4);
    t14 = *((unsigned int *)t9);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t9) != 0)
        goto LAB32;

LAB33:    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB34;

LAB35:    memcpy(t37, t13, 8);

LAB36:    memset(t68, 0, 8);
    t69 = (t37 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t37);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t69) != 0)
        goto LAB51;

LAB52:    t76 = (t68 + 4);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t76);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB53;

LAB54:    memcpy(t96, t68, 8);

LAB55:    memset(t128, 0, 8);
    t129 = (t96 + 4);
    t130 = *((unsigned int *)t129);
    t131 = (~(t130));
    t132 = *((unsigned int *)t96);
    t133 = (t132 & t131);
    t134 = (t133 & 1U);
    if (t134 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t129) != 0)
        goto LAB70;

LAB71:    t136 = (t128 + 4);
    t137 = *((unsigned int *)t128);
    t138 = (!(t137));
    t139 = *((unsigned int *)t136);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB72;

LAB73:    memcpy(t273, t128, 8);

LAB74:    t301 = (t273 + 4);
    t302 = *((unsigned int *)t301);
    t303 = (~(t302));
    t304 = *((unsigned int *)t273);
    t305 = (t304 & t303);
    t306 = (t305 != 0);
    if (t306 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(56, ng2);

LAB129:    xsi_set_current_line(57, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB127:    xsi_set_current_line(59, ng2);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t9);
    t32 = (t22 | t31);
    t33 = (~(t32));
    t34 = (t21 & t33);
    if (t34 != 0)
        goto LAB133;

LAB130:    if (t32 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t25) = 1;

LAB133:    memset(t13, 0, 8);
    t19 = (t25 + 4);
    t35 = *((unsigned int *)t19);
    t38 = (~(t35));
    t39 = *((unsigned int *)t25);
    t40 = (t39 & t38);
    t44 = (t40 & 1U);
    if (t44 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t19) != 0)
        goto LAB136;

LAB137:    t24 = (t13 + 4);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t24);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB138;

LAB139:    t48 = *((unsigned int *)t13);
    t49 = (~(t48));
    t50 = *((unsigned int *)t24);
    t53 = (t49 || t50);
    if (t53 > 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t24) > 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t13) > 0)
        goto LAB144;

LAB145:    memcpy(t12, t27, 8);

LAB146:    t28 = (t0 + 2680);
    xsi_vlogvar_assign_value(t28, t12, 0, 0, 1);
    goto LAB23;

LAB9:    xsi_set_current_line(63, ng2);

LAB147:    xsi_set_current_line(64, ng2);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    xsi_vlogtype_unsigned_bit_neg(t10, 33, t4, 32);
    t3 = ((char*)((ng7)));
    xsi_vlog_unsigned_add(t309, 33, t10, 33, t3, 32);
    t7 = (t0 + 2040);
    xsi_vlogvar_assign_value(t7, t309, 0, 0, 32);
    t8 = (t0 + 2200);
    xsi_vlogvar_assign_value(t8, t309, 32, 0, 1);
    xsi_set_current_line(65, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng2);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t9);
    t32 = (t22 | t31);
    t33 = (~(t32));
    t34 = (t21 & t33);
    if (t34 != 0)
        goto LAB151;

LAB148:    if (t32 != 0)
        goto LAB150;

LAB149:    *((unsigned int *)t25) = 1;

LAB151:    memset(t13, 0, 8);
    t19 = (t25 + 4);
    t35 = *((unsigned int *)t19);
    t38 = (~(t35));
    t39 = *((unsigned int *)t25);
    t40 = (t39 & t38);
    t44 = (t40 & 1U);
    if (t44 != 0)
        goto LAB152;

LAB153:    if (*((unsigned int *)t19) != 0)
        goto LAB154;

LAB155:    t24 = (t13 + 4);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t24);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB156;

LAB157:    t48 = *((unsigned int *)t13);
    t49 = (~(t48));
    t50 = *((unsigned int *)t24);
    t53 = (t49 || t50);
    if (t53 > 0)
        goto LAB158;

LAB159:    if (*((unsigned int *)t24) > 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t13) > 0)
        goto LAB162;

LAB163:    memcpy(t12, t27, 8);

LAB164:    t28 = (t0 + 2680);
    xsi_vlogvar_assign_value(t28, t12, 0, 0, 1);
    xsi_set_current_line(67, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB11:    xsi_set_current_line(71, ng2);

LAB165:    xsi_set_current_line(72, ng2);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 & t15);
    *((unsigned int *)t12) = t16;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t12 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t20 = (t17 | t18);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB166;

LAB167:
LAB168:    t23 = (t0 + 2040);
    xsi_vlogvar_assign_value(t23, t12, 0, 0, 32);
    xsi_set_current_line(73, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng2);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t9);
    t32 = (t22 | t31);
    t33 = (~(t32));
    t34 = (t21 & t33);
    if (t34 != 0)
        goto LAB172;

LAB169:    if (t32 != 0)
        goto LAB171;

LAB170:    *((unsigned int *)t25) = 1;

LAB172:    memset(t13, 0, 8);
    t19 = (t25 + 4);
    t35 = *((unsigned int *)t19);
    t38 = (~(t35));
    t39 = *((unsigned int *)t25);
    t40 = (t39 & t38);
    t44 = (t40 & 1U);
    if (t44 != 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t19) != 0)
        goto LAB175;

LAB176:    t24 = (t13 + 4);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t24);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB177;

LAB178:    t48 = *((unsigned int *)t13);
    t49 = (~(t48));
    t50 = *((unsigned int *)t24);
    t53 = (t49 || t50);
    if (t53 > 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t24) > 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t13) > 0)
        goto LAB183;

LAB184:    memcpy(t12, t27, 8);

LAB185:    t28 = (t0 + 2680);
    xsi_vlogvar_assign_value(t28, t12, 0, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(80, ng2);

LAB186:    xsi_set_current_line(81, ng2);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    *((unsigned int *)t12) = t16;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t12 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t20 = (t17 | t18);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB187;

LAB188:
LAB189:    t11 = (t0 + 2040);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 32);
    xsi_set_current_line(82, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng2);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t9);
    t32 = (t22 | t31);
    t33 = (~(t32));
    t34 = (t21 & t33);
    if (t34 != 0)
        goto LAB193;

LAB190:    if (t32 != 0)
        goto LAB192;

LAB191:    *((unsigned int *)t25) = 1;

LAB193:    memset(t13, 0, 8);
    t19 = (t25 + 4);
    t35 = *((unsigned int *)t19);
    t38 = (~(t35));
    t39 = *((unsigned int *)t25);
    t40 = (t39 & t38);
    t44 = (t40 & 1U);
    if (t44 != 0)
        goto LAB194;

LAB195:    if (*((unsigned int *)t19) != 0)
        goto LAB196;

LAB197:    t24 = (t13 + 4);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t24);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB198;

LAB199:    t48 = *((unsigned int *)t13);
    t49 = (~(t48));
    t50 = *((unsigned int *)t24);
    t53 = (t49 || t50);
    if (t53 > 0)
        goto LAB200;

LAB201:    if (*((unsigned int *)t24) > 0)
        goto LAB202;

LAB203:    if (*((unsigned int *)t13) > 0)
        goto LAB204;

LAB205:    memcpy(t12, t27, 8);

LAB206:    t28 = (t0 + 2680);
    xsi_vlogvar_assign_value(t28, t12, 0, 0, 1);
    goto LAB23;

LAB15:    xsi_set_current_line(88, ng2);

LAB207:    xsi_set_current_line(89, ng2);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_lshift(t12, 32, t4, 32, t7, 32);
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 32);
    xsi_set_current_line(90, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng2);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t9);
    t32 = (t22 | t31);
    t33 = (~(t32));
    t34 = (t21 & t33);
    if (t34 != 0)
        goto LAB211;

LAB208:    if (t32 != 0)
        goto LAB210;

LAB209:    *((unsigned int *)t25) = 1;

LAB211:    memset(t13, 0, 8);
    t19 = (t25 + 4);
    t35 = *((unsigned int *)t19);
    t38 = (~(t35));
    t39 = *((unsigned int *)t25);
    t40 = (t39 & t38);
    t44 = (t40 & 1U);
    if (t44 != 0)
        goto LAB212;

LAB213:    if (*((unsigned int *)t19) != 0)
        goto LAB214;

LAB215:    t24 = (t13 + 4);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t24);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB216;

LAB217:    t48 = *((unsigned int *)t13);
    t49 = (~(t48));
    t50 = *((unsigned int *)t24);
    t53 = (t49 || t50);
    if (t53 > 0)
        goto LAB218;

LAB219:    if (*((unsigned int *)t24) > 0)
        goto LAB220;

LAB221:    if (*((unsigned int *)t13) > 0)
        goto LAB222;

LAB223:    memcpy(t12, t27, 8);

LAB224:    t28 = (t0 + 2680);
    xsi_vlogvar_assign_value(t28, t12, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(95, ng2);

LAB225:    xsi_set_current_line(96, ng2);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_rshift(t12, 32, t4, 32, t7, 32);
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 32);
    xsi_set_current_line(97, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng2);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t9);
    t32 = (t22 | t31);
    t33 = (~(t32));
    t34 = (t21 & t33);
    if (t34 != 0)
        goto LAB229;

LAB226:    if (t32 != 0)
        goto LAB228;

LAB227:    *((unsigned int *)t25) = 1;

LAB229:    memset(t13, 0, 8);
    t19 = (t25 + 4);
    t35 = *((unsigned int *)t19);
    t38 = (~(t35));
    t39 = *((unsigned int *)t25);
    t40 = (t39 & t38);
    t44 = (t40 & 1U);
    if (t44 != 0)
        goto LAB230;

LAB231:    if (*((unsigned int *)t19) != 0)
        goto LAB232;

LAB233:    t24 = (t13 + 4);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t24);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB234;

LAB235:    t48 = *((unsigned int *)t13);
    t49 = (~(t48));
    t50 = *((unsigned int *)t24);
    t53 = (t49 || t50);
    if (t53 > 0)
        goto LAB236;

LAB237:    if (*((unsigned int *)t24) > 0)
        goto LAB238;

LAB239:    if (*((unsigned int *)t13) > 0)
        goto LAB240;

LAB241:    memcpy(t12, t27, 8);

LAB242:    t28 = (t0 + 2680);
    xsi_vlogvar_assign_value(t28, t12, 0, 0, 1);
    goto LAB23;

LAB19:    xsi_set_current_line(102, ng2);

LAB243:    xsi_set_current_line(103, ng2);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t12, 32, t4, 32, t7, 32);
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 32);
    xsi_set_current_line(104, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng2);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t9);
    t32 = (t22 | t31);
    t33 = (~(t32));
    t34 = (t21 & t33);
    if (t34 != 0)
        goto LAB247;

LAB244:    if (t32 != 0)
        goto LAB246;

LAB245:    *((unsigned int *)t25) = 1;

LAB247:    memset(t13, 0, 8);
    t19 = (t25 + 4);
    t35 = *((unsigned int *)t19);
    t38 = (~(t35));
    t39 = *((unsigned int *)t25);
    t40 = (t39 & t38);
    t44 = (t40 & 1U);
    if (t44 != 0)
        goto LAB248;

LAB249:    if (*((unsigned int *)t19) != 0)
        goto LAB250;

LAB251:    t24 = (t13 + 4);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t24);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB252;

LAB253:    t48 = *((unsigned int *)t13);
    t49 = (~(t48));
    t50 = *((unsigned int *)t24);
    t53 = (t49 || t50);
    if (t53 > 0)
        goto LAB254;

LAB255:    if (*((unsigned int *)t24) > 0)
        goto LAB256;

LAB257:    if (*((unsigned int *)t13) > 0)
        goto LAB258;

LAB259:    memcpy(t12, t27, 8);

LAB260:    t28 = (t0 + 2680);
    xsi_vlogvar_assign_value(t28, t12, 0, 0, 1);
    goto LAB23;

LAB26:    t8 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB28;

LAB30:    *((unsigned int *)t13) = 1;
    goto LAB33;

LAB32:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB33;

LAB34:    t23 = (t0 + 1640U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB38;

LAB37:    t27 = (t23 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t24) < *((unsigned int *)t23))
        goto LAB40;

LAB39:    *((unsigned int *)t25) = 1;

LAB40:    memset(t29, 0, 8);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t25);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t30) != 0)
        goto LAB44;

LAB45:    t38 = *((unsigned int *)t13);
    t39 = *((unsigned int *)t29);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t13 + 4);
    t42 = (t29 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB36;

LAB38:    t28 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB40;

LAB42:    *((unsigned int *)t29) = 1;
    goto LAB45;

LAB44:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB45;

LAB46:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t13 + 4);
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t13);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t29);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t6 = (t54 & t56);
    t61 = (t58 & t60);
    t62 = (~(t6));
    t63 = (~(t61));
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t66 & t62);
    t67 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t67 & t63);
    goto LAB48;

LAB49:    *((unsigned int *)t68) = 1;
    goto LAB52;

LAB51:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB52;

LAB53:    t80 = (t0 + 2040);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = ((char*)((ng4)));
    memset(t84, 0, 8);
    t85 = (t82 + 4);
    if (*((unsigned int *)t85) != 0)
        goto LAB57;

LAB56:    t86 = (t83 + 4);
    if (*((unsigned int *)t86) != 0)
        goto LAB57;

LAB60:    if (*((unsigned int *)t82) < *((unsigned int *)t83))
        goto LAB58;

LAB59:    memset(t88, 0, 8);
    t89 = (t84 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t84);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t89) != 0)
        goto LAB63;

LAB64:    t97 = *((unsigned int *)t68);
    t98 = *((unsigned int *)t88);
    t99 = (t97 & t98);
    *((unsigned int *)t96) = t99;
    t100 = (t68 + 4);
    t101 = (t88 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB55;

LAB57:    t87 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB59;

LAB58:    *((unsigned int *)t84) = 1;
    goto LAB59;

LAB61:    *((unsigned int *)t88) = 1;
    goto LAB64;

LAB63:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB64;

LAB65:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t68 + 4);
    t111 = (t88 + 4);
    t112 = *((unsigned int *)t68);
    t113 = (~(t112));
    t114 = *((unsigned int *)t110);
    t115 = (~(t114));
    t116 = *((unsigned int *)t88);
    t117 = (~(t116));
    t118 = *((unsigned int *)t111);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t124 & t122);
    t125 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t125 & t123);
    t126 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t126 & t122);
    t127 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t127 & t123);
    goto LAB67;

LAB68:    *((unsigned int *)t128) = 1;
    goto LAB71;

LAB70:    t135 = (t128 + 4);
    *((unsigned int *)t128) = 1;
    *((unsigned int *)t135) = 1;
    goto LAB71;

LAB72:    t141 = (t0 + 1480U);
    t142 = *((char **)t141);
    t141 = ((char*)((ng4)));
    memset(t143, 0, 8);
    t144 = (t142 + 4);
    if (*((unsigned int *)t144) != 0)
        goto LAB76;

LAB75:    t145 = (t141 + 4);
    if (*((unsigned int *)t145) != 0)
        goto LAB76;

LAB79:    if (*((unsigned int *)t142) < *((unsigned int *)t141))
        goto LAB77;

LAB78:    memset(t147, 0, 8);
    t148 = (t143 + 4);
    t149 = *((unsigned int *)t148);
    t150 = (~(t149));
    t151 = *((unsigned int *)t143);
    t152 = (t151 & t150);
    t153 = (t152 & 1U);
    if (t153 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t148) != 0)
        goto LAB82;

LAB83:    t155 = (t147 + 4);
    t156 = *((unsigned int *)t147);
    t157 = *((unsigned int *)t155);
    t158 = (t156 || t157);
    if (t158 > 0)
        goto LAB84;

LAB85:    memcpy(t173, t147, 8);

LAB86:    memset(t205, 0, 8);
    t206 = (t173 + 4);
    t207 = *((unsigned int *)t206);
    t208 = (~(t207));
    t209 = *((unsigned int *)t173);
    t210 = (t209 & t208);
    t211 = (t210 & 1U);
    if (t211 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t206) != 0)
        goto LAB101;

LAB102:    t213 = (t205 + 4);
    t214 = *((unsigned int *)t205);
    t215 = *((unsigned int *)t213);
    t216 = (t214 || t215);
    if (t216 > 0)
        goto LAB103;

LAB104:    memcpy(t233, t205, 8);

LAB105:    memset(t265, 0, 8);
    t266 = (t233 + 4);
    t267 = *((unsigned int *)t266);
    t268 = (~(t267));
    t269 = *((unsigned int *)t233);
    t270 = (t269 & t268);
    t271 = (t270 & 1U);
    if (t271 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t266) != 0)
        goto LAB120;

LAB121:    t274 = *((unsigned int *)t128);
    t275 = *((unsigned int *)t265);
    t276 = (t274 | t275);
    *((unsigned int *)t273) = t276;
    t277 = (t128 + 4);
    t278 = (t265 + 4);
    t279 = (t273 + 4);
    t280 = *((unsigned int *)t277);
    t281 = *((unsigned int *)t278);
    t282 = (t280 | t281);
    *((unsigned int *)t279) = t282;
    t283 = *((unsigned int *)t279);
    t284 = (t283 != 0);
    if (t284 == 1)
        goto LAB122;

LAB123:
LAB124:    goto LAB74;

LAB76:    t146 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB78;

LAB77:    *((unsigned int *)t143) = 1;
    goto LAB78;

LAB80:    *((unsigned int *)t147) = 1;
    goto LAB83;

LAB82:    t154 = (t147 + 4);
    *((unsigned int *)t147) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB83;

LAB84:    t159 = (t0 + 1640U);
    t160 = *((char **)t159);
    t159 = ((char*)((ng4)));
    memset(t161, 0, 8);
    t162 = (t160 + 4);
    if (*((unsigned int *)t162) != 0)
        goto LAB88;

LAB87:    t163 = (t159 + 4);
    if (*((unsigned int *)t163) != 0)
        goto LAB88;

LAB91:    if (*((unsigned int *)t160) < *((unsigned int *)t159))
        goto LAB89;

LAB90:    memset(t165, 0, 8);
    t166 = (t161 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t161);
    t170 = (t169 & t168);
    t171 = (t170 & 1U);
    if (t171 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t166) != 0)
        goto LAB94;

LAB95:    t174 = *((unsigned int *)t147);
    t175 = *((unsigned int *)t165);
    t176 = (t174 & t175);
    *((unsigned int *)t173) = t176;
    t177 = (t147 + 4);
    t178 = (t165 + 4);
    t179 = (t173 + 4);
    t180 = *((unsigned int *)t177);
    t181 = *((unsigned int *)t178);
    t182 = (t180 | t181);
    *((unsigned int *)t179) = t182;
    t183 = *((unsigned int *)t179);
    t184 = (t183 != 0);
    if (t184 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB86;

LAB88:    t164 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB90;

LAB89:    *((unsigned int *)t161) = 1;
    goto LAB90;

LAB92:    *((unsigned int *)t165) = 1;
    goto LAB95;

LAB94:    t172 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t172) = 1;
    goto LAB95;

LAB96:    t185 = *((unsigned int *)t173);
    t186 = *((unsigned int *)t179);
    *((unsigned int *)t173) = (t185 | t186);
    t187 = (t147 + 4);
    t188 = (t165 + 4);
    t189 = *((unsigned int *)t147);
    t190 = (~(t189));
    t191 = *((unsigned int *)t187);
    t192 = (~(t191));
    t193 = *((unsigned int *)t165);
    t194 = (~(t193));
    t195 = *((unsigned int *)t188);
    t196 = (~(t195));
    t197 = (t190 & t192);
    t198 = (t194 & t196);
    t199 = (~(t197));
    t200 = (~(t198));
    t201 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t201 & t199);
    t202 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t202 & t200);
    t203 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t203 & t199);
    t204 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t204 & t200);
    goto LAB98;

LAB99:    *((unsigned int *)t205) = 1;
    goto LAB102;

LAB101:    t212 = (t205 + 4);
    *((unsigned int *)t205) = 1;
    *((unsigned int *)t212) = 1;
    goto LAB102;

LAB103:    t217 = (t0 + 2040);
    t218 = (t217 + 56U);
    t219 = *((char **)t218);
    t220 = ((char*)((ng4)));
    memset(t221, 0, 8);
    t222 = (t219 + 4);
    if (*((unsigned int *)t222) != 0)
        goto LAB107;

LAB106:    t223 = (t220 + 4);
    if (*((unsigned int *)t223) != 0)
        goto LAB107;

LAB110:    if (*((unsigned int *)t219) < *((unsigned int *)t220))
        goto LAB109;

LAB108:    *((unsigned int *)t221) = 1;

LAB109:    memset(t225, 0, 8);
    t226 = (t221 + 4);
    t227 = *((unsigned int *)t226);
    t228 = (~(t227));
    t229 = *((unsigned int *)t221);
    t230 = (t229 & t228);
    t231 = (t230 & 1U);
    if (t231 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t226) != 0)
        goto LAB113;

LAB114:    t234 = *((unsigned int *)t205);
    t235 = *((unsigned int *)t225);
    t236 = (t234 & t235);
    *((unsigned int *)t233) = t236;
    t237 = (t205 + 4);
    t238 = (t225 + 4);
    t239 = (t233 + 4);
    t240 = *((unsigned int *)t237);
    t241 = *((unsigned int *)t238);
    t242 = (t240 | t241);
    *((unsigned int *)t239) = t242;
    t243 = *((unsigned int *)t239);
    t244 = (t243 != 0);
    if (t244 == 1)
        goto LAB115;

LAB116:
LAB117:    goto LAB105;

LAB107:    t224 = (t221 + 4);
    *((unsigned int *)t221) = 1;
    *((unsigned int *)t224) = 1;
    goto LAB109;

LAB111:    *((unsigned int *)t225) = 1;
    goto LAB114;

LAB113:    t232 = (t225 + 4);
    *((unsigned int *)t225) = 1;
    *((unsigned int *)t232) = 1;
    goto LAB114;

LAB115:    t245 = *((unsigned int *)t233);
    t246 = *((unsigned int *)t239);
    *((unsigned int *)t233) = (t245 | t246);
    t247 = (t205 + 4);
    t248 = (t225 + 4);
    t249 = *((unsigned int *)t205);
    t250 = (~(t249));
    t251 = *((unsigned int *)t247);
    t252 = (~(t251));
    t253 = *((unsigned int *)t225);
    t254 = (~(t253));
    t255 = *((unsigned int *)t248);
    t256 = (~(t255));
    t257 = (t250 & t252);
    t258 = (t254 & t256);
    t259 = (~(t257));
    t260 = (~(t258));
    t261 = *((unsigned int *)t239);
    *((unsigned int *)t239) = (t261 & t259);
    t262 = *((unsigned int *)t239);
    *((unsigned int *)t239) = (t262 & t260);
    t263 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t263 & t259);
    t264 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t264 & t260);
    goto LAB117;

LAB118:    *((unsigned int *)t265) = 1;
    goto LAB121;

LAB120:    t272 = (t265 + 4);
    *((unsigned int *)t265) = 1;
    *((unsigned int *)t272) = 1;
    goto LAB121;

LAB122:    t285 = *((unsigned int *)t273);
    t286 = *((unsigned int *)t279);
    *((unsigned int *)t273) = (t285 | t286);
    t287 = (t128 + 4);
    t288 = (t265 + 4);
    t289 = *((unsigned int *)t287);
    t290 = (~(t289));
    t291 = *((unsigned int *)t128);
    t292 = (t291 & t290);
    t293 = *((unsigned int *)t288);
    t294 = (~(t293));
    t295 = *((unsigned int *)t265);
    t296 = (t295 & t294);
    t297 = (~(t292));
    t298 = (~(t296));
    t299 = *((unsigned int *)t279);
    *((unsigned int *)t279) = (t299 & t297);
    t300 = *((unsigned int *)t279);
    *((unsigned int *)t279) = (t300 & t298);
    goto LAB124;

LAB125:    xsi_set_current_line(52, ng2);

LAB128:    xsi_set_current_line(53, ng2);
    t307 = ((char*)((ng5)));
    t308 = (t0 + 2520);
    xsi_vlogvar_assign_value(t308, t307, 0, 0, 1);
    goto LAB127;

LAB132:    t11 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB133;

LAB134:    *((unsigned int *)t13) = 1;
    goto LAB137;

LAB136:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB137;

LAB138:    t26 = ((char*)((ng5)));
    goto LAB139;

LAB140:    t27 = ((char*)((ng4)));
    goto LAB141;

LAB142:    xsi_vlog_unsigned_bit_combine(t12, 32, t26, 32, t27, 32);
    goto LAB146;

LAB144:    memcpy(t12, t26, 8);
    goto LAB146;

LAB150:    t11 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB151;

LAB152:    *((unsigned int *)t13) = 1;
    goto LAB155;

LAB154:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB155;

LAB156:    t26 = ((char*)((ng5)));
    goto LAB157;

LAB158:    t27 = ((char*)((ng4)));
    goto LAB159;

LAB160:    xsi_vlog_unsigned_bit_combine(t12, 32, t26, 32, t27, 32);
    goto LAB164;

LAB162:    memcpy(t12, t26, 8);
    goto LAB164;

LAB166:    t31 = *((unsigned int *)t12);
    t32 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t31 | t32);
    t11 = (t4 + 4);
    t19 = (t7 + 4);
    t33 = *((unsigned int *)t4);
    t34 = (~(t33));
    t35 = *((unsigned int *)t11);
    t38 = (~(t35));
    t39 = *((unsigned int *)t7);
    t40 = (~(t39));
    t44 = *((unsigned int *)t19);
    t45 = (~(t44));
    t61 = (t34 & t38);
    t120 = (t40 & t45);
    t46 = (~(t61));
    t47 = (~(t120));
    t48 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t48 & t46);
    t49 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t49 & t47);
    t50 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t50 & t46);
    t53 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t53 & t47);
    goto LAB168;

LAB171:    t11 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB172;

LAB173:    *((unsigned int *)t13) = 1;
    goto LAB176;

LAB175:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB176;

LAB177:    t26 = ((char*)((ng5)));
    goto LAB178;

LAB179:    t27 = ((char*)((ng4)));
    goto LAB180;

LAB181:    xsi_vlog_unsigned_bit_combine(t12, 32, t26, 32, t27, 32);
    goto LAB185;

LAB183:    memcpy(t12, t26, 8);
    goto LAB185;

LAB187:    t31 = *((unsigned int *)t12);
    t32 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t31 | t32);
    goto LAB189;

LAB192:    t11 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB193;

LAB194:    *((unsigned int *)t13) = 1;
    goto LAB197;

LAB196:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB197;

LAB198:    t26 = ((char*)((ng5)));
    goto LAB199;

LAB200:    t27 = ((char*)((ng4)));
    goto LAB201;

LAB202:    xsi_vlog_unsigned_bit_combine(t12, 32, t26, 32, t27, 32);
    goto LAB206;

LAB204:    memcpy(t12, t26, 8);
    goto LAB206;

LAB210:    t11 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB211;

LAB212:    *((unsigned int *)t13) = 1;
    goto LAB215;

LAB214:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB215;

LAB216:    t26 = ((char*)((ng5)));
    goto LAB217;

LAB218:    t27 = ((char*)((ng4)));
    goto LAB219;

LAB220:    xsi_vlog_unsigned_bit_combine(t12, 32, t26, 32, t27, 32);
    goto LAB224;

LAB222:    memcpy(t12, t26, 8);
    goto LAB224;

LAB228:    t11 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB229;

LAB230:    *((unsigned int *)t13) = 1;
    goto LAB233;

LAB232:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB233;

LAB234:    t26 = ((char*)((ng5)));
    goto LAB235;

LAB236:    t27 = ((char*)((ng4)));
    goto LAB237;

LAB238:    xsi_vlog_unsigned_bit_combine(t12, 32, t26, 32, t27, 32);
    goto LAB242;

LAB240:    memcpy(t12, t26, 8);
    goto LAB242;

LAB246:    t11 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB247;

LAB248:    *((unsigned int *)t13) = 1;
    goto LAB251;

LAB250:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB251;

LAB252:    t26 = ((char*)((ng5)));
    goto LAB253;

LAB254:    t27 = ((char*)((ng4)));
    goto LAB255;

LAB256:    xsi_vlog_unsigned_bit_combine(t12, 32, t26, 32, t27, 32);
    goto LAB260;

LAB258:    memcpy(t12, t26, 8);
    goto LAB260;

LAB263:    t8 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB265;

LAB264:    *((unsigned int *)t12) = 1;
    goto LAB265;

LAB267:    *((unsigned int *)t13) = 1;
    goto LAB270;

LAB269:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB270;

LAB271:    t23 = (t0 + 1480U);
    t24 = *((char **)t23);
    t23 = (t0 + 1640U);
    t26 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t24 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB275;

LAB274:    t27 = (t26 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB275;

LAB278:    if (*((unsigned int *)t24) > *((unsigned int *)t26))
        goto LAB276;

LAB277:    memset(t29, 0, 8);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t25);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB279;

LAB280:    if (*((unsigned int *)t30) != 0)
        goto LAB281;

LAB282:    t38 = *((unsigned int *)t13);
    t39 = *((unsigned int *)t29);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t13 + 4);
    t42 = (t29 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB283;

LAB284:
LAB285:    goto LAB273;

LAB275:    t28 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB277;

LAB276:    *((unsigned int *)t25) = 1;
    goto LAB277;

LAB279:    *((unsigned int *)t29) = 1;
    goto LAB282;

LAB281:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB282;

LAB283:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t13 + 4);
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t13);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t29);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t6 = (t54 & t56);
    t61 = (t58 & t60);
    t62 = (~(t6));
    t63 = (~(t61));
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t66 & t62);
    t67 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t67 & t63);
    goto LAB285;

LAB286:    *((unsigned int *)t68) = 1;
    goto LAB289;

LAB288:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB289;

LAB290:    t80 = (t0 + 1640U);
    t81 = *((char **)t80);
    t80 = ((char*)((ng4)));
    memset(t84, 0, 8);
    t82 = (t81 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB294;

LAB293:    t83 = (t80 + 4);
    if (*((unsigned int *)t83) != 0)
        goto LAB294;

LAB297:    if (*((unsigned int *)t81) < *((unsigned int *)t80))
        goto LAB295;

LAB296:    memset(t88, 0, 8);
    t86 = (t84 + 4);
    t91 = *((unsigned int *)t86);
    t92 = (~(t91));
    t93 = *((unsigned int *)t84);
    t94 = (t93 & t92);
    t97 = (t94 & 1U);
    if (t97 != 0)
        goto LAB298;

LAB299:    if (*((unsigned int *)t86) != 0)
        goto LAB300;

LAB301:    t89 = (t88 + 4);
    t98 = *((unsigned int *)t88);
    t99 = *((unsigned int *)t89);
    t103 = (t98 || t99);
    if (t103 > 0)
        goto LAB302;

LAB303:    memcpy(t143, t88, 8);

LAB304:    memset(t147, 0, 8);
    t145 = (t143 + 4);
    t149 = *((unsigned int *)t145);
    t150 = (~(t149));
    t151 = *((unsigned int *)t143);
    t152 = (t151 & t150);
    t153 = (t152 & 1U);
    if (t153 != 0)
        goto LAB317;

LAB318:    if (*((unsigned int *)t145) != 0)
        goto LAB319;

LAB320:    t156 = *((unsigned int *)t68);
    t157 = *((unsigned int *)t147);
    t158 = (t156 | t157);
    *((unsigned int *)t161) = t158;
    t148 = (t68 + 4);
    t154 = (t147 + 4);
    t155 = (t161 + 4);
    t167 = *((unsigned int *)t148);
    t168 = *((unsigned int *)t154);
    t169 = (t167 | t168);
    *((unsigned int *)t155) = t169;
    t170 = *((unsigned int *)t155);
    t171 = (t170 != 0);
    if (t171 == 1)
        goto LAB321;

LAB322:
LAB323:    goto LAB292;

LAB294:    t85 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB296;

LAB295:    *((unsigned int *)t84) = 1;
    goto LAB296;

LAB298:    *((unsigned int *)t88) = 1;
    goto LAB301;

LAB300:    t87 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB301;

LAB302:    t95 = (t0 + 1640U);
    t100 = *((char **)t95);
    t95 = (t0 + 1480U);
    t101 = *((char **)t95);
    memset(t96, 0, 8);
    t95 = (t100 + 4);
    if (*((unsigned int *)t95) != 0)
        goto LAB306;

LAB305:    t102 = (t101 + 4);
    if (*((unsigned int *)t102) != 0)
        goto LAB306;

LAB309:    if (*((unsigned int *)t100) > *((unsigned int *)t101))
        goto LAB307;

LAB308:    memset(t128, 0, 8);
    t111 = (t96 + 4);
    t104 = *((unsigned int *)t111);
    t105 = (~(t104));
    t106 = *((unsigned int *)t96);
    t107 = (t106 & t105);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB310;

LAB311:    if (*((unsigned int *)t111) != 0)
        goto LAB312;

LAB313:    t109 = *((unsigned int *)t88);
    t112 = *((unsigned int *)t128);
    t113 = (t109 & t112);
    *((unsigned int *)t143) = t113;
    t135 = (t88 + 4);
    t136 = (t128 + 4);
    t141 = (t143 + 4);
    t114 = *((unsigned int *)t135);
    t115 = *((unsigned int *)t136);
    t116 = (t114 | t115);
    *((unsigned int *)t141) = t116;
    t117 = *((unsigned int *)t141);
    t118 = (t117 != 0);
    if (t118 == 1)
        goto LAB314;

LAB315:
LAB316:    goto LAB304;

LAB306:    t110 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB308;

LAB307:    *((unsigned int *)t96) = 1;
    goto LAB308;

LAB310:    *((unsigned int *)t128) = 1;
    goto LAB313;

LAB312:    t129 = (t128 + 4);
    *((unsigned int *)t128) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB313;

LAB314:    t119 = *((unsigned int *)t143);
    t122 = *((unsigned int *)t141);
    *((unsigned int *)t143) = (t119 | t122);
    t142 = (t88 + 4);
    t144 = (t128 + 4);
    t123 = *((unsigned int *)t88);
    t124 = (~(t123));
    t125 = *((unsigned int *)t142);
    t126 = (~(t125));
    t127 = *((unsigned int *)t128);
    t130 = (~(t127));
    t131 = *((unsigned int *)t144);
    t132 = (~(t131));
    t120 = (t124 & t126);
    t121 = (t130 & t132);
    t133 = (~(t120));
    t134 = (~(t121));
    t137 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t137 & t133);
    t138 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t138 & t134);
    t139 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t139 & t133);
    t140 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t140 & t134);
    goto LAB316;

LAB317:    *((unsigned int *)t147) = 1;
    goto LAB320;

LAB319:    t146 = (t147 + 4);
    *((unsigned int *)t147) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB320;

LAB321:    t174 = *((unsigned int *)t161);
    t175 = *((unsigned int *)t155);
    *((unsigned int *)t161) = (t174 | t175);
    t159 = (t68 + 4);
    t160 = (t147 + 4);
    t176 = *((unsigned int *)t159);
    t180 = (~(t176));
    t181 = *((unsigned int *)t68);
    t197 = (t181 & t180);
    t182 = *((unsigned int *)t160);
    t183 = (~(t182));
    t184 = *((unsigned int *)t147);
    t198 = (t184 & t183);
    t185 = (~(t197));
    t186 = (~(t198));
    t189 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t189 & t185);
    t190 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t190 & t186);
    goto LAB323;

LAB324:    xsi_set_current_line(119, ng2);
    t163 = ((char*)((ng5)));
    t164 = (t0 + 2360);
    xsi_vlogvar_assign_value(t164, t163, 0, 0, 1);
    goto LAB326;

}

static void Always_123_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng2);
    t2 = (t0 + 4176);
    *((int *)t2) = 1;
    t3 = (t0 + 3872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(123, ng2);

LAB5:    xsi_set_current_line(124, ng2);
    t4 = (t0 + 3648);
    xsi_vlog_strobe(0, (void *)Monitor_124_2, t4);
    xsi_set_current_line(125, ng2);
    t2 = (t0 + 3648);
    xsi_vlog_strobe(0, (void *)Monitor_125_3, t2);
    goto LAB2;

}


extern void work_m_11317369399580989671_3218583386_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Always_123_1};
	xsi_register_didat("work_m_11317369399580989671_3218583386", "isim/ALU_TB_isim_beh.exe.sim/work/m_11317369399580989671_3218583386.didat");
	xsi_register_executes(pe);
}
