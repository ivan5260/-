#导入所有函数
from pvz import *

SelectCards(["寒冰菇","咖啡豆","南瓜头","樱桃"])

StartNutsFixerThread([(1, 1),(2, 1),(5, 1),(6, 1)], "南瓜头")

StartAutoCollectThread()

for wave in range(1,21):
    if wave in (1,2,3,4,5,6,7,8,11,12,13,14,15,16,17,18):
        Prejudge(-33,wave)
        TryPao((2,9),(5,9))

    elif wave in (9,19):
        Prejudge(-33,wave)
        TryPao((2,9),(5,9))
        Until(700)
        TryPao((2, 9), (5, 9))

    elif wave == 10:
        Prejudge(-33,wave)
        TryPao((2,9),(5,9)) 
        Until(223)
        Card("樱桃", (2, 9))

    elif wave == 20:
        Prejudge(-750,wave)
        Until(-310)
        Card("寒冰菇", (2, 7))
        Until(-309)
        Card("咖啡", (2, 7))
        Prejudge(-33,wave)
        TryPao((2, 9), (5, 9))
        Until(700)
        TryPao((2, 9), (5, 9))
        Until(900)
        TryPao((2, 9), (5, 9))