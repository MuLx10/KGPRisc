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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_04380254098085578724_1957175458_init();
    xilinxcorelib_ver_m_04284627112054182733_1257013326_init();
    xilinxcorelib_ver_m_18166792875774041790_2665453648_init();
    xilinxcorelib_ver_m_17738287534884592592_3437801387_init();
    xilinxcorelib_ver_m_10066368518302646626_0623494081_init();
    work_m_14056882636803624207_2138213552_init();
    work_m_09511766340438736344_0967961054_init();
    work_m_06073713780751451174_3674772129_init();
    work_m_16392465760149296642_1938225339_init();
    work_m_11317369399580989671_3218583386_init();
    work_m_16853334319368159758_2461264495_init();
    work_m_12466505639657975796_0093123207_init();
    work_m_10539598473508316785_2398448995_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_10539598473508316785_2398448995");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
