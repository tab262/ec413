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
static const char *ng0 = "C:/Users/Casey/Desktop/ec413/project/ec413/project1.0/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static int ng9[] = {1, 0};
static int ng10[] = {0, 0};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};



static int sp_f_ALU(char *t1, char *t2)
{
    char t6[8];
    char t16[8];
    char t42[8];
    char t71[8];
    char t72[8];
    char t73[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
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
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    int t68;
    int t69;
    unsigned int t70;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;

LAB0:    t0 = 1;
    xsi_set_current_line(48, ng0);

LAB2:    xsi_set_current_line(49, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t6);
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

LAB8:    xsi_set_current_line(75, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t6);
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
        goto LAB102;

LAB99:    if (t28 != 0)
        goto LAB101;

LAB100:    *((unsigned int *)t16) = 1;

LAB102:    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB103;

LAB104:
LAB105:
LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);

LAB10:    xsi_set_current_line(50, ng0);
    t38 = (t1 + 2840);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng1)));
    memset(t42, 0, 8);
    t43 = (t40 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB14;

LAB11:    if (t54 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t42) = 1;

LAB14:    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(53, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t19 = (t11 | t14);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB22;

LAB19:    if (t22 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t6) = 1;

LAB22:    t18 = (t6 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(56, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t19 = (t11 | t14);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB32;

LAB29:    if (t22 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t6) = 1;

LAB32:    t18 = (t6 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(59, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t19 = (t11 | t14);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB40;

LAB37:    if (t22 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t6) = 1;

LAB40:    t18 = (t6 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(62, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t19 = (t11 | t14);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB48;

LAB45:    if (t22 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t6) = 1;

LAB48:    t18 = (t6 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(65, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t19 = (t11 | t14);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB59;

LAB56:    if (t22 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB59:    t18 = (t6 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(68, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t19 = (t11 | t14);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB70;

LAB67:    if (t22 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t6) = 1;

LAB70:    t18 = (t6 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(71, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t19 = (t11 | t14);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB81;

LAB78:    if (t22 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t6) = 1;

LAB81:    t18 = (t6 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB82;

LAB83:
LAB84:
LAB73:
LAB62:
LAB51:
LAB43:
LAB35:
LAB25:
LAB17:    goto LAB9;

LAB13:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(50, ng0);

LAB18:    xsi_set_current_line(52, ng0);
    t64 = (t1 + 2520);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t1 + 2360);
    xsi_vlogvar_assign_value(t67, t66, 0, 0, 32);
    goto LAB17;

LAB21:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(53, ng0);

LAB26:    xsi_set_current_line(55, ng0);
    t31 = (t1 + 2520);
    t32 = (t31 + 56U);
    t38 = *((char **)t32);
    memset(t16, 0, 8);
    t39 = (t16 + 4);
    t40 = (t38 + 4);
    t30 = *((unsigned int *)t38);
    t33 = (~(t30));
    *((unsigned int *)t16) = t33;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB28;

LAB27:    t45 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 4294967295U);
    t41 = (t1 + 2360);
    xsi_vlogvar_assign_value(t41, t16, 0, 0, 32);
    goto LAB25;

LAB28:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t40);
    *((unsigned int *)t16) = (t34 | t35);
    t36 = *((unsigned int *)t39);
    t37 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t36 | t37);
    goto LAB27;

LAB31:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(56, ng0);

LAB36:    xsi_set_current_line(58, ng0);
    t31 = (t1 + 2520);
    t32 = (t31 + 56U);
    t38 = *((char **)t32);
    t39 = (t1 + 2680);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t38, 32, t41, 32);
    t43 = (t1 + 2360);
    xsi_vlogvar_assign_value(t43, t16, 0, 0, 32);
    goto LAB35;

LAB39:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(59, ng0);

LAB44:    xsi_set_current_line(61, ng0);
    t31 = (t1 + 2520);
    t32 = (t31 + 56U);
    t38 = *((char **)t32);
    t39 = (t1 + 2680);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t38, 32, t41, 32);
    t43 = (t1 + 2360);
    xsi_vlogvar_assign_value(t43, t16, 0, 0, 32);
    goto LAB43;

LAB47:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(62, ng0);

LAB52:    xsi_set_current_line(64, ng0);
    t31 = (t1 + 2520);
    t32 = (t31 + 56U);
    t38 = *((char **)t32);
    t39 = (t1 + 2680);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t30 = *((unsigned int *)t38);
    t33 = *((unsigned int *)t41);
    t34 = (t30 | t33);
    *((unsigned int *)t16) = t34;
    t43 = (t38 + 4);
    t44 = (t41 + 4);
    t57 = (t16 + 4);
    t35 = *((unsigned int *)t43);
    t36 = *((unsigned int *)t44);
    t37 = (t35 | t36);
    *((unsigned int *)t57) = t37;
    t45 = *((unsigned int *)t57);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB53;

LAB54:
LAB55:    t65 = (t1 + 2360);
    xsi_vlogvar_assign_value(t65, t16, 0, 0, 32);
    goto LAB51;

LAB53:    t47 = *((unsigned int *)t16);
    t48 = *((unsigned int *)t57);
    *((unsigned int *)t16) = (t47 | t48);
    t58 = (t38 + 4);
    t64 = (t41 + 4);
    t49 = *((unsigned int *)t58);
    t50 = (~(t49));
    t51 = *((unsigned int *)t38);
    t68 = (t51 & t50);
    t52 = *((unsigned int *)t64);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t69 = (t54 & t53);
    t55 = (~(t68));
    t56 = (~(t69));
    t59 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t59 & t55);
    t60 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t60 & t56);
    goto LAB55;

LAB58:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(65, ng0);

LAB63:    xsi_set_current_line(67, ng0);
    t31 = (t1 + 2520);
    t32 = (t31 + 56U);
    t38 = *((char **)t32);
    t39 = (t1 + 2680);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t30 = *((unsigned int *)t38);
    t33 = *((unsigned int *)t41);
    t34 = (t30 & t33);
    *((unsigned int *)t16) = t34;
    t43 = (t38 + 4);
    t44 = (t41 + 4);
    t57 = (t16 + 4);
    t35 = *((unsigned int *)t43);
    t36 = *((unsigned int *)t44);
    t37 = (t35 | t36);
    *((unsigned int *)t57) = t37;
    t45 = *((unsigned int *)t57);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB64;

LAB65:
LAB66:    t65 = (t1 + 2360);
    xsi_vlogvar_assign_value(t65, t16, 0, 0, 32);
    goto LAB62;

LAB64:    t47 = *((unsigned int *)t16);
    t48 = *((unsigned int *)t57);
    *((unsigned int *)t16) = (t47 | t48);
    t58 = (t38 + 4);
    t64 = (t41 + 4);
    t49 = *((unsigned int *)t38);
    t50 = (~(t49));
    t51 = *((unsigned int *)t58);
    t52 = (~(t51));
    t53 = *((unsigned int *)t41);
    t54 = (~(t53));
    t55 = *((unsigned int *)t64);
    t56 = (~(t55));
    t68 = (t50 & t52);
    t69 = (t54 & t56);
    t59 = (~(t68));
    t60 = (~(t69));
    t61 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t61 & t59);
    t62 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t62 & t60);
    t63 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t63 & t59);
    t70 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t70 & t60);
    goto LAB66;

LAB69:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(68, ng0);

LAB74:    xsi_set_current_line(70, ng0);
    t31 = (t1 + 2520);
    t32 = (t31 + 56U);
    t38 = *((char **)t32);
    t39 = (t1 + 2680);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t30 = *((unsigned int *)t38);
    t33 = *((unsigned int *)t41);
    t34 = (t30 ^ t33);
    *((unsigned int *)t16) = t34;
    t43 = (t38 + 4);
    t44 = (t41 + 4);
    t57 = (t16 + 4);
    t35 = *((unsigned int *)t43);
    t36 = *((unsigned int *)t44);
    t37 = (t35 | t36);
    *((unsigned int *)t57) = t37;
    t45 = *((unsigned int *)t57);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB75;

LAB76:
LAB77:    t58 = (t1 + 2360);
    xsi_vlogvar_assign_value(t58, t16, 0, 0, 32);
    goto LAB73;

LAB75:    t47 = *((unsigned int *)t16);
    t48 = *((unsigned int *)t57);
    *((unsigned int *)t16) = (t47 | t48);
    goto LAB77;

LAB80:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(71, ng0);

LAB85:    xsi_set_current_line(73, ng0);
    t31 = (t1 + 2520);
    t32 = (t31 + 56U);
    t38 = *((char **)t32);
    t39 = (t1 + 2680);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t73, 0, 8);
    xsi_vlog_signed_less(t73, 32, t38, 32, t41, 32);
    memset(t42, 0, 8);
    t43 = (t73 + 4);
    t30 = *((unsigned int *)t43);
    t33 = (~(t30));
    t34 = *((unsigned int *)t73);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t43) != 0)
        goto LAB88;

LAB89:    t57 = (t42 + 4);
    t37 = *((unsigned int *)t42);
    t45 = *((unsigned int *)t57);
    t46 = (t37 || t45);
    if (t46 > 0)
        goto LAB90;

LAB91:    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t57);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t57) > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t42) > 0)
        goto LAB96;

LAB97:    memcpy(t16, t64, 8);

LAB98:    t65 = (t1 + 2360);
    xsi_vlogvar_assign_value(t65, t16, 0, 0, 32);
    goto LAB84;

LAB86:    *((unsigned int *)t42) = 1;
    goto LAB89;

LAB88:    t44 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB89;

LAB90:    t58 = ((char*)((ng9)));
    goto LAB91;

LAB92:    t64 = ((char*)((ng10)));
    goto LAB93;

LAB94:    xsi_vlog_unsigned_bit_combine(t16, 32, t58, 32, t64, 32);
    goto LAB98;

LAB96:    memcpy(t16, t58, 8);
    goto LAB98;

LAB101:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB102;

LAB103:    xsi_set_current_line(75, ng0);

LAB106:    xsi_set_current_line(76, ng0);
    t38 = (t1 + 2840);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng11)));
    memset(t42, 0, 8);
    t43 = (t40 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB110;

LAB107:    if (t54 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t42) = 1;

LAB110:    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(78, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t19 = (t11 | t14);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB118;

LAB115:    if (t22 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t6) = 1;

LAB118:    t18 = (t6 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(80, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t19 = (t11 | t14);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t15);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB126;

LAB123:    if (t22 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t6) = 1;

LAB126:    t18 = (t6 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(82, ng0);

LAB131:    xsi_set_current_line(83, ng0);
    t3 = (t1 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t1 + 2360);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);

LAB129:
LAB121:
LAB113:    goto LAB105;

LAB109:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(76, ng0);

LAB114:    xsi_set_current_line(77, ng0);
    t64 = (t1 + 2680);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t72, 0, 8);
    t67 = (t72 + 4);
    t74 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t75 = (t70 >> 0);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t74);
    t77 = (t76 >> 0);
    *((unsigned int *)t67) = t77;
    t78 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t78 & 65535U);
    t79 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t79 & 65535U);
    t80 = (t1 + 2520);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memset(t73, 0, 8);
    t83 = (t73 + 4);
    t84 = (t82 + 4);
    t85 = *((unsigned int *)t82);
    t86 = (t85 >> 16);
    *((unsigned int *)t73) = t86;
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 16);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t89 & 65535U);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t90 & 65535U);
    xsi_vlogtype_concat(t71, 32, 32, 2U, t73, 16, t72, 16);
    t91 = (t1 + 2360);
    xsi_vlogvar_assign_value(t91, t71, 0, 0, 32);
    goto LAB113;

LAB117:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB118;

LAB119:    xsi_set_current_line(78, ng0);

LAB122:    xsi_set_current_line(79, ng0);
    t31 = (t1 + 2520);
    t32 = (t31 + 56U);
    t38 = *((char **)t32);
    memset(t42, 0, 8);
    t39 = (t42 + 4);
    t40 = (t38 + 4);
    t30 = *((unsigned int *)t38);
    t33 = (t30 >> 0);
    *((unsigned int *)t42) = t33;
    t34 = *((unsigned int *)t40);
    t35 = (t34 >> 0);
    *((unsigned int *)t39) = t35;
    t36 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t36 & 65535U);
    t37 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t37 & 65535U);
    t41 = (t1 + 2680);
    t43 = (t41 + 56U);
    t44 = *((char **)t43);
    memset(t71, 0, 8);
    t57 = (t71 + 4);
    t58 = (t44 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (t45 >> 0);
    *((unsigned int *)t71) = t46;
    t47 = *((unsigned int *)t58);
    t48 = (t47 >> 0);
    *((unsigned int *)t57) = t48;
    t49 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t49 & 65535U);
    t50 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t50 & 65535U);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t71, 16, t42, 16);
    t64 = (t1 + 2360);
    xsi_vlogvar_assign_value(t64, t16, 0, 0, 32);
    goto LAB121;

LAB125:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB126;

LAB127:    xsi_set_current_line(80, ng0);

LAB130:    xsi_set_current_line(81, ng0);
    t31 = (t1 + 2680);
    t32 = (t31 + 56U);
    t38 = *((char **)t32);
    t39 = (t1 + 2360);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 32);
    goto LAB129;

}

static void Cont_90_0(char *t0)
{
    char t23[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 3760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    t2 = (t0 + 3568);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 4);

LAB4:    t11 = (t0 + 3664);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB6;

LAB5:    t12 = (t0 + 3664);
    t20 = *((char **)t12);
    t12 = (t0 + 2360);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 848);
    t25 = (t0 + 3568);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 4160);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t23, 8);
    xsi_driver_vfirst_trans(t27, 0, 31);
    t32 = (t0 + 4080);
    *((int *)t32) = 1;

LAB1:    return;
LAB6:    t11 = (t0 + 3760U);
    *((char **)t11) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000002188592335_0886308060_init()
{
	static char *pe[] = {(void *)Cont_90_0};
	static char *se[] = {(void *)sp_f_ALU};
	xsi_register_didat("work_m_00000000002188592335_0886308060", "isim/test_CPU_isim_beh.exe.sim/work/m_00000000002188592335_0886308060.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
