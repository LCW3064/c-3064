#
# 20193064 이창우
# LAB 4-8 컴퓨터와 승부차기 게임을 만들어보자, 110쪽
#
import random

n = random.randint(1,3) # 1,2,3 중 랜덤한 하나의 값 생성
if n == 1:
    computer_choice = '왼쪽'

elif n == 2:
    computer_choice = '중앙'

else:
    computer_choice = '오른쪽'

user_choice = input('어디를 공격하시겠어요?(왼쪽, 중앙, 오른쪽) : ')
if computer_choice == user_choice :
    print('공격에 실패하셨습니다.')

else :
    print('축하합니다!! 공격에 성공하였습니다.')

print('컴퓨터의 수비위치 :', computer_choice)
print('프로그램을 종료합니다.')
