#导入所有函数
from pvz import *

SelectCards(["寒冰菇","咖啡豆","樱桃","南瓜头"])

StartAutoCollectThread()

StartNutsFixerThread([(1, 1),(2, 1),(5, 1),(6, 1)], "南瓜头")

StartAutoFillIceThread([(4, 9)], 2)

for wave in range(1,21):
    if wave in (1,2,3,4,5,6,7,8,11,12,13,14,15,16,17,18):
        Prejudge(-95,wave)
        TryPao((2,9),(5,9))

    elif wave in (9,19):
        Prejudge(-95,wave)
        TryPao((2,9),(5,9))
        Until(446)
        TryPao((2,9),(5,9))

    elif wave == 10:
        Prejudge(-40,wave)
        TryPao((2,9),(5,9)) 
        Until(500)
        Card("樱桃", (5, 9))

    elif wave == 20:
        Prejudge(-750,wave)
        Until(-309)
        Card("咖啡", (4, 9))
        Prejudge(-33,wave)
        TryPao((2, 9), (5, 9))
        Until(500)
        TryPao((2, 9), (5, 9))
        Until(1450)
        TryPao((2, 9), (5, 9))