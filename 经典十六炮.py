#导入所有函数
from pvz import *

SelectCards(["寒冰菇","咖啡豆","樱桃","小喷菇","复制小喷菇"])


StartAutoCollectThread()

for wave in range(1,21):
    if wave == 1:
        Prejudge(-33,wave)
        TryPao((2,9),(5,9))

    elif wave in (2,4,5,7,8,11,13,14,16,17):
        Prejudge(-33,wave)
        TryPao((2,9),(5,9))

    elif wave in (3,6,12,15,18):
        Prejudge(-33,wave)
        TryPao((2,9),(5,9))
        Until(107)
        TryPao((2,9),(5,9))

    elif wave in (9,19):
        Prejudge(-33,wave)
        TryPao((2,9),(5,9))
        Until(107)
        TryPao((2,9),(5,9))
        Until(500)
        TryPao((2, 9), (5, 9))

    elif wave == 10:
        Prejudge(-33,wave)
        TryPao((2,9),(5,9)) 
        Until(150)
        Card("寒冰菇", (2, 7))
        Until(151)
        Card("咖啡", (2, 7))
        Until(550)
        Card("樱桃", (2, 9))

    elif wave == 20:
        Prejudge(-750,wave)
        Until(-150)
        TryPao((4,7))
        Until(-33)
        TryPao((2, 9), (5, 9))
        Until(150)
        Card("寒冰菇", (2, 7))
        Card("咖啡", (2, 7))
        Until(1500)
        TryPao((2, 9), (5, 9),(5,9),(2,9))