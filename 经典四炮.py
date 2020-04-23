'''
@Author: your name
@Date: 2020-03-20 11:27:04
@LastEditTime: 2020-04-11 15:48:41
@LastEditors: Please set LastEditors
@Description: In User Settings Edit
@FilePath: \.vscode\经典四炮.py
'''
#导入所有函数
from pvz import *

SelectCards(["冰","咖啡豆","复制冰","小喷菇","阳光菇","倭瓜","毁灭菇","荷叶","樱桃","南瓜头"])

StartAutoCollectThread()

StartNutsFixerThread([(3, 5),(4, 5),(1,4),(6,4),(3,6),(4,6)], "南瓜头")

StartAutoFillIceThread([(3,5),(1,4),(6,4)],100)

for wave in range(1,21):
    print("当前操作波次: " + str(wave))
    if wave in (1,):
        Prejudge(-60,wave)
        Card("荷叶",(3,9))
        Card("毁灭菇",(3,9))
        Card("咖啡豆",(3,9))

    elif wave in (2,):
        Prejudge(-33,wave)
        TryPao((2,9),(5,9))


    elif wave in (3,4,5,6,7,8,9,12,13,14,15,16,17,18,19):
        Prejudge(-200,wave)
        Coffee()
        Until(1427)
        TryPao((2,8),(5,8))
        if wave == 9:
            print(f"第 {wave} 波手动收尾.")

    elif wave in (10,):
        Prejudge(160,wave)
        Card("荷叶",(3,8))
        Card("毁灭菇",(3,8))
        Card("咖啡豆",(3,8))
    
    elif wave in (11,):
        Prejudge(-33,wave)
        TryPao((2,9),(5,9))

    elif wave == 20:
        Prejudge(150,wave)
        Coffee()
        Until(1427)
        TryPao((2,8),(5,8))
        print(f"第 {wave} 波手动收尾.")



    
