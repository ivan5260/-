/*
 * @Author: your name
 * @Date: 2020-04-04 09:55:08
 * @LastEditTime: 2020-04-04 15:29:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings EditCC
 * @FilePath: \AVZ\Ch6EightCannons.cpp
 */

#include "avz.h"

void Ch6EightCannons()
{
    //OpenMultipleEffective();
    SetZombies({PJ_0, CG_3, WW_8, BC_12, HT_14, KG_17, TT_18, BJ_20, FT_21, TL_22, BY_23, HY_32});
    SelectCards({"hbg", "Mhbg", "ytzd", "ngt", "wg", "kfd", "hp", "dxg", "ygg", "xpg"});
    SetTime(-600, 1);
    pao_operator.resetPaoList({{3, 1}, {4, 1}, {3, 3}, {4, 3}, {1, 5}, {2, 5}, {5, 5}, {6, 5}});
    ice_filler.start({{3, 9}, {4, 9}, {1, 7}, {2, 7}});

    for (auto wave : {1, 2, 4, 6, 8, 10, 12, 14, 16, 18})
    {
        Prejudge(-200, wave);
        Until(-33);
        pao_operator.pao({{2, 9}, {5, 9}});
    }
    for (auto wave : {3, 5, 7, 11, 13, 15, 17})
    {
        Prejudge(-200, wave);
        ice_filler.coffee();
        Until(577);
        pao_operator.pao({{2, 9}, {5, 9}});
    }
    for (auto wave : {9, 19})
    {
        Prejudge(-200, wave);
        ice_filler.coffee();
        Until(577);
        pao_operator.pao({{2, 9}, {5, 9}});
        Until(577 + 600);
        pao_operator.pao({{2, 9}, {5, 9}});
        Until(577 + 1200 + 527);
        pao_operator.pao({{2, 9}, {5, 9}});
        Card("ytzd", 2, 8);
    }
    for (auto wave : {20})
    {
        Prejudge(-200, wave);
        ice_filler.coffee();
        Until(577);
        pao_operator.pao({{2, 9}, {5, 9}});
        Until(577 + 600);
        pao_operator.pao({{1, 9}, {6, 9}});
        pao_operator.pao({{1, 9.5}, {6, 9.5}});
        pao_operator.pao({{1, 9}, {6, 9}});
    }
}
