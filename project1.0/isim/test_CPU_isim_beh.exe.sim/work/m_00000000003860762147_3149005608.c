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
static const char *ng0 = "C:/Users/Casey/Desktop/ec413/project/ec413/project1.0/readSelect_SELECTOR.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {6U, 0U};



static int sp_f_RS1(char *t1, char *t2)
{
    char t3[8];
    char t16[8];
    char t32[8];
    char t45[8];
    char t58[8];
    char t74[8];
    char t82[8];
    char t116[8];
    int t0;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;

LAB0:    t0 = 1;
    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t4 = (t1 + 2792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 29);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 29);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 7U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 7U);
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t3 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB6;

LAB3:    if (t28 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t16) = 1;

LAB6:    memset(t32, 0, 8);
    t33 = (t16 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t16);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t33) != 0)
        goto LAB9;

LAB10:    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t42 = (!(t41));
    t43 = *((unsigned int *)t40);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB11;

LAB12:    memcpy(t82, t32, 8);

LAB13:    t110 = (t82 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t82);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(31, ng0);

LAB29:    xsi_set_current_line(32, ng0);
    t4 = (t1 + 2792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 21);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 21);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 31U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 31U);
    t15 = (t1 + 2632);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 5);

LAB27:    t0 = 0;

LAB1:    return t0;
LAB5:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB6;

LAB7:    *((unsigned int *)t32) = 1;
    goto LAB10;

LAB9:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB10;

LAB11:    t46 = (t1 + 2792);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t45, 0, 8);
    t49 = (t45 + 4);
    t50 = (t48 + 4);
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 29);
    *((unsigned int *)t45) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 29);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t55 & 7U);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 7U);
    t57 = ((char*)((ng2)));
    memset(t58, 0, 8);
    t59 = (t45 + 4);
    t60 = (t57 + 4);
    t61 = *((unsigned int *)t45);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = *((unsigned int *)t59);
    t65 = *((unsigned int *)t60);
    t66 = (t64 ^ t65);
    t67 = (t63 | t66);
    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t60);
    t70 = (t68 | t69);
    t71 = (~(t70));
    t72 = (t67 & t71);
    if (t72 != 0)
        goto LAB17;

LAB14:    if (t70 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t58) = 1;

LAB17:    memset(t74, 0, 8);
    t75 = (t58 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t58);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t75) != 0)
        goto LAB20;

LAB21:    t83 = *((unsigned int *)t32);
    t84 = *((unsigned int *)t74);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = (t32 + 4);
    t87 = (t74 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB13;

LAB16:    t73 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t74) = 1;
    goto LAB21;

LAB20:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB21;

LAB22:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t32 + 4);
    t97 = (t74 + 4);
    t98 = *((unsigned int *)t96);
    t99 = (~(t98));
    t100 = *((unsigned int *)t32);
    t101 = (t100 & t99);
    t102 = *((unsigned int *)t97);
    t103 = (~(t102));
    t104 = *((unsigned int *)t74);
    t105 = (t104 & t103);
    t106 = (~(t101));
    t107 = (~(t105));
    t108 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t108 & t106);
    t109 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t109 & t107);
    goto LAB24;

LAB25:    xsi_set_current_line(29, ng0);

LAB28:    xsi_set_current_line(30, ng0);
    t117 = (t1 + 2792);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    memset(t116, 0, 8);
    t120 = (t116 + 4);
    t121 = (t119 + 4);
    t122 = *((unsigned int *)t119);
    t123 = (t122 >> 16);
    *((unsigned int *)t116) = t123;
    t124 = *((unsigned int *)t121);
    t125 = (t124 >> 16);
    *((unsigned int *)t120) = t125;
    t126 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t126 & 31U);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t127 & 31U);
    t128 = (t1 + 2632);
    xsi_vlogvar_assign_value(t128, t116, 0, 0, 5);
    goto LAB27;

}

static int sp_f_RS2(char *t1, char *t2)
{
    char t3[8];
    char t16[8];
    char t38[8];
    int t0;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;

LAB0:    t0 = 1;
    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    t4 = (t1 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 29);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 29);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 7U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 7U);
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t3 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB6;

LAB3:    if (t28 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t16) = 1;

LAB6:    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(42, ng0);

LAB11:    xsi_set_current_line(43, ng0);
    t4 = (t1 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 16);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 16);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 31U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 31U);
    t15 = (t1 + 2952);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 5);

LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);

LAB10:    xsi_set_current_line(41, ng0);
    t39 = (t1 + 3112);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t38, 0, 8);
    t42 = (t38 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 11);
    *((unsigned int *)t38) = t45;
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 11);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t48 & 31U);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 & 31U);
    t50 = (t1 + 2952);
    xsi_vlogvar_assign_value(t50, t38, 0, 0, 5);
    goto LAB9;

}

static void Cont_48_0(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 4032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 3840);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t6 = (t0 + 2792);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);

LAB4:    t7 = (t0 + 3936);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);
    if (t15 != 0)
        goto LAB6;

LAB5:    t8 = (t0 + 3936);
    t16 = *((char **)t8);
    t8 = (t0 + 2632);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t0 + 848);
    t21 = (t0 + 3840);
    t22 = 0;
    xsi_delete_subprogram_invocation(t20, t16, t0, t21, t22);
    t23 = (t0 + 4696);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 31U;
    t29 = t28;
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t19);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 4);
    t36 = (t0 + 4600);
    *((int *)t36) = 1;

LAB1:    return;
LAB6:    t7 = (t0 + 4032U);
    *((char **)t7) = &&LAB4;
    goto LAB1;

}

static void Cont_49_1(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 4088);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t6 = (t0 + 3112);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);

LAB4:    t7 = (t0 + 4184);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);
    if (t15 != 0)
        goto LAB6;

LAB5:    t8 = (t0 + 4184);
    t16 = *((char **)t8);
    t8 = (t0 + 2952);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t0 + 1280);
    t21 = (t0 + 4088);
    t22 = 0;
    xsi_delete_subprogram_invocation(t20, t16, t0, t21, t22);
    t23 = (t0 + 4760);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 31U;
    t29 = t28;
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t19);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 4);
    t36 = (t0 + 4616);
    *((int *)t36) = 1;

LAB1:    return;
LAB6:    t7 = (t0 + 4280U);
    *((char **)t7) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000003860762147_3149005608_init()
{
	static char *pe[] = {(void *)Cont_48_0,(void *)Cont_49_1};
	static char *se[] = {(void *)sp_f_RS1,(void *)sp_f_RS2};
	xsi_register_didat("work_m_00000000003860762147_3149005608", "isim/test_CPU_isim_beh.exe.sim/work/m_00000000003860762147_3149005608.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
