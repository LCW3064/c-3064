#
# 20193064 이창우
# LAB 5-11 무한 반복문으로 숫자 맞추기 게임을 만들자, 134쪽
#
import random

answer = random.randint(1,100)
tries = 0
guess = 0
print("1부터 100 사이의 숫자를 맞추시오")

while guess != answer :                         # guess 와 answer이 같을 경우 종료
    guess = int(input("숫자를 입력하시오: "))
    tries = tries + 1                           # 사용자가 시도한 횟수

    if guess < answer :
        print("낮음!")
    elif guess > answer :
        print("높음!")

print("축하합니다. 총 시도횟수=", tries)        # 시도 횟수 출력
