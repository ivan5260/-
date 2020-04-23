/*
 * @coding: utf-8
 * @Author: 使命永驻
 * @Date: 
 * @Description: 经典八炮 P6
 */

#include "avz.h"

void PECannon8()
{

    //OpenMultipleEffective();
    SetZombies({PJ_0, XC_15, CG_3, QS_11, WW_8, BC_12, HT_14, KG_17, TT_18, BJ_20, FT_21, TL_22, BY_23, HY_32});
    SelectCards({"hmg", "Mhmg", "kfd", "ngt", "hy", "wg", "ytzd", "dxg", "xpg", "xrk"});
    KeyConnect('A', [=]() {
        Card("xpg", MouseRow(), MouseCol());
    });
    KeyConnect('S', [=]() {
        Card("wg", MouseRow(), MouseCol());
    });
    KeyConnect('D', [=]() {
        Shovel(MouseRow(), MouseCol());
    });
    KeyConnect('F', [=]() {
        Card("xrk", MouseRow(), MouseCol());
    });
    KeyConnect('Q', [=]() {
        Card("dxg", MouseRow(), MouseCol());
    });
    SetTime(-600, 1);
    pao_operator.resetPaoList({{1, 5}, {2, 5}, {3, 1}, {3, 3}, {4, 1}, {4, 3}, {5, 5}, {6, 5}});
    plant_fixer.start(NGT_30, {{3, 5}, {3, 6}, {4, 5}, {4, 6}, {3, 7}, {4, 7}});
    plant_fixer.resetFixHp(4000 / 3 * 2);

    for (auto wave : {1, 2, 3, 4, 7, 8, 9, 11, 12, 13, 16, 17, 18, 19})
    {
        SetTime(-200, wave);
        Until(280 - 373);
        pao_operator.pao({{2, 9}, {5, 9}});
        if (wave == 4)
        {
            Until(280 - 373);
            Card("hy", 3, 9);
        }
        if (wave == 9)
        {
            Until(280 - 373 + 601);
            pao_operator.pao({{2, 9}, {5, 9}});
        }
        if (wave == 13)
        {
            Until(280 - 373);
            Card("hy", 4, 9);
        }
        if (wave == 19)
        {
            Until(280 - 373 + 601 + 601 + 480);
            pao_operator.pao({{2, 9}, {5, 9}});
        }
    }
    for (auto wave : {10})
    {
        SetTime(-200, wave);
        Until(340 - 373);
        pao_operator.pao({{2, 9}, {5, 9}});
        Until(300);
        Card("ytzd", 2, 9);
    }
    for (auto wave : {5})
    {
        SetTime(-200, wave);
        Until(280 - 298);
        Card("hmg", 3, 9);
        Card("kfd", 3, 9);
    }
    for (auto wave : {6})
    {
        SetTime(-200, wave);
        Until(500 - 298 - 320);
        Card("hy", 4, 8);
        Card("Mhmg", 4, 8);
        Until(500 - 298);
        Card("kfd", 4, 8);
    }
    for (auto wave : {14})
    {
        SetTime(-200, wave);
        Until(280 - 298);
        Card("hmg", 4, 9);
        Card("kfd", 4, 9);
    }
    for (auto wave : {15})
    {
        SetTime(-200, wave);
        Until(510 - 298 - 320);
        Card("hy", 3, 8);
        Card("Mhmg", 3, 8);
        Until(510 - 298);
        Card("kfd", 3, 8);
    }
    for (auto wave : {20})
    {
        Prejudge(-200, wave);
        Until(-150);
        pao_operator.pao({{4, 7}});
        Until(-33);
        pao_operator.pao({{2, 9}, {5, 9}, {5, 9}, {2, 9}, {5, 9}});
        Until(4800);
        Shovel({{1, 1}, {2, 1}, {5, 1}, {6, 1}});
    }
}