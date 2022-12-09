#
# 20193064 이창우
# LAB 5-12 암산 문제를 만들어보자, 135쪽
#

import random

while True :                        # Ctrl+c를 누를 때 프로그램 종료
    x = random.randint(1,100)
    y = random.randint(1,100)
    print(x, "+", y, "=", end = " ")
    answer = int(input())

    if answer == x + y :
        print("잘했어요!!")
    else :
        print("정답은 {}입니다. 다음 번에는 잘할 수 있죠?".format(x+y))
print('프로그램을 종료합니다.')
