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
static const char *ng0 = "C:/Users/Casey/Desktop/ec413/project/ec413/project1.0/EX_MUX.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static int sp_f_out(char *t1, char *t2)
{
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t0 = 1;
    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    t3 = (t1 + 3800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB6;

LAB3:    if (t19 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(34, ng0);
    t3 = (t1 + 3800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB14;

LAB11:    if (t19 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t7) = 1;

LAB14:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(36, ng0);
    t3 = (t1 + 3800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB22;

LAB19:    if (t19 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t7) = 1;

LAB22:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(38, ng0);
    t3 = (t1 + 3800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB30;

LAB27:    if (t19 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t7) = 1;

LAB30:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(40, ng0);

LAB35:    xsi_set_current_line(41, ng0);
    t3 = (t1 + 3640);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 2840);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB33:
LAB25:
LAB17:
LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);

LAB10:    xsi_set_current_line(33, ng0);
    t29 = (t1 + 3000);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t1 + 2840);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 32);
    goto LAB9;

LAB13:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(34, ng0);

LAB18:    xsi_set_current_line(35, ng0);
    t29 = (t1 + 3160);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t1 + 2840);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 32);
    goto LAB17;

LAB21:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(36, ng0);

LAB26:    xsi_set_current_line(37, ng0);
    t29 = (t1 + 3320);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t1 + 2840);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 32);
    goto LAB25;

LAB29:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(38, ng0);

LAB34:    xsi_set_current_line(39, ng0);
    t29 = (t1 + 3480);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t1 + 2840);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 32);
    goto LAB33;

}

static void Cont_46_0(char *t0)
{
    char t29[8];
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 4720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    t2 = (t0 + 1960U);
    t6 = *((char **)t2);
    t2 = (t0 + 2120U);
    t7 = *((char **)t2);
    t2 = (t0 + 2280U);
    t8 = *((char **)t2);
    t2 = (t0 + 4528);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t2, 0, t0, t9, 0, 0);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 32);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    t13 = (t0 + 3320);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 32);
    t14 = (t0 + 3480);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 32);
    t15 = (t0 + 3640);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 32);
    t16 = (t0 + 3800);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 3);

LAB4:    t17 = (t0 + 4624);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t25 != 0)
        goto LAB6;

LAB5:    t18 = (t0 + 4624);
    t26 = *((char **)t18);
    t18 = (t0 + 2840);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    memcpy(t29, t28, 8);
    t30 = (t0 + 848);
    t31 = (t0 + 4528);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    t33 = (t0 + 5120);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t29, 8);
    xsi_driver_vfirst_trans(t33, 0, 31);
    t38 = (t0 + 5040);
    *((int *)t38) = 1;

LAB1:    return;
LAB6:    t17 = (t0 + 4720U);
    *((char **)t17) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000000673207058_3372191096_init()
{
	static char *pe[] = {(void *)Cont_46_0};
	static char *se[] = {(void *)sp_f_out};
	xsi_register_didat("work_m_00000000000673207058_3372191096", "isim/test_CPU_isim_beh.exe.sim/work/m_00000000000673207058_3372191096.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
