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
static const char *ng0 = "C:/Users/Casey/Desktop/ec413/project/ec413/project1.0/IMem.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3827302410U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {3829399572U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {3831496734U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {3833593896U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {3835691058U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {3837788220U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {3839885382U, 0U};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {3841982544U, 0U};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {0U, 0U};
static int ng19[] = {9, 0};
static int ng20[] = {10, 0};
static unsigned int ng21[] = {1075906559U, 0U};
static int ng22[] = {11, 0};
static unsigned int ng23[] = {1078069247U, 0U};
static int ng24[] = {12, 0};
static unsigned int ng25[] = {1080231935U, 0U};
static int ng26[] = {13, 0};
static unsigned int ng27[] = {1082394623U, 0U};
static int ng28[] = {14, 0};
static unsigned int ng29[] = {1084557311U, 0U};
static int ng30[] = {15, 0};
static unsigned int ng31[] = {1086719999U, 0U};
static int ng32[] = {16, 0};
static unsigned int ng33[] = {1088882687U, 0U};
static int ng34[] = {17, 0};
static unsigned int ng35[] = {1091045375U, 0U};
static int ng36[] = {18, 0};
static int ng37[] = {19, 0};
static int ng38[] = {20, 0};
static int ng39[] = {21, 0};
static unsigned int ng40[] = {1159790592U, 0U};
static int ng41[] = {22, 0};
static unsigned int ng42[] = {1229070336U, 0U};
static int ng43[] = {23, 0};
static unsigned int ng44[] = {1298468864U, 0U};
static int ng45[] = {24, 0};
static unsigned int ng46[] = {1568806912U, 0U};
static int ng47[] = {25, 0};
static int ng48[] = {26, 0};
static int ng49[] = {27, 0};
static int ng50[] = {28, 0};
static unsigned int ng51[] = {3382837247U, 0U};
static int ng52[] = {29, 0};
static unsigned int ng53[] = {3519206928U, 0U};
static int ng54[] = {30, 0};
static int ng55[] = {31, 0};
static int ng56[] = {32, 0};
static int ng57[] = {33, 0};
static unsigned int ng58[] = {4032823299U, 0U};
static int ng59[] = {34, 0};
static int ng60[] = {35, 0};
static int ng61[] = {36, 0};
static int ng62[] = {37, 0};
static unsigned int ng63[] = {3995074563U, 0U};
static int ng64[] = {38, 0};
static int ng65[] = {39, 0};
static int ng66[] = {40, 0};
static int ng67[] = {41, 0};
static unsigned int ng68[] = {2149646337U, 0U};
static int ng69[] = {42, 0};
static unsigned int ng70[] = {1431655761U, 0U};
static int ng71[] = {43, 0};
static unsigned int ng72[] = {2218983426U, 0U};
static int ng73[] = {44, 0};
static unsigned int ng74[] = {1431655762U, 0U};
static int ng75[] = {45, 0};
static unsigned int ng76[] = {1431655763U, 0U};
static int ng77[] = {46, 0};
static unsigned int ng78[] = {2290417665U, 0U};
static int ng79[] = {47, 0};
static unsigned int ng80[] = {1431655764U, 0U};
static int ng81[] = {48, 0};
static unsigned int ng82[] = {2361851905U, 0U};
static int ng83[] = {49, 0};
static unsigned int ng84[] = {1431655770U, 0U};
static int ng85[] = {50, 0};
static unsigned int ng86[] = {67108864U, 0U};



static void Always_45_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2824);
    *((int *)t2) = 1;
    t3 = (t0 + 2536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng34)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng36)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng38)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng39)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng41)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng43)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng45)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng47)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng48)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng49)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng50)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng52)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng54)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng55)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng56)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng57)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng59)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng60)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng61)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng62)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng64)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng65)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng66)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng67)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng69)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng71)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng73)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng75)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng77)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng79)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng81)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng83)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng85)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 32);
    if (t6 == 1)
        goto LAB107;

LAB108:
LAB110:
LAB109:    xsi_set_current_line(266, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB111:    goto LAB2;

LAB7:    xsi_set_current_line(67, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1584);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB111;

LAB9:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB11:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB13:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB15:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB17:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB19:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB21:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB23:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB25:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB27:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB29:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB31:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB33:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB35:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB37:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng31)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB39:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng33)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB41:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng35)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB43:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB45:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB47:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB49:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB51:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng42)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB53:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng44)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB55:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng46)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB57:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB59:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB61:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB63:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng51)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB65:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng53)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB67:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB69:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB71:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB73:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng58)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB75:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB77:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB79:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB81:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng63)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB83:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB85:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB87:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB89:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng68)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB91:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng70)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB93:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng72)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB95:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng74)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB97:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng76)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB99:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng78)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB101:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng80)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB103:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng82)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB105:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng84)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

LAB107:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng86)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB111;

}


extern void work_m_00000000001889228470_0984947828_init()
{
	static char *pe[] = {(void *)Always_45_0};
	xsi_register_didat("work_m_00000000001889228470_0984947828", "isim/test_CPU_isim_beh.exe.sim/work/m_00000000001889228470_0984947828.didat");
	xsi_register_executes(pe);
}
