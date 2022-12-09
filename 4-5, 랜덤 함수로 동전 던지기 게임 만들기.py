#
# 20193064 이창우
# LAB 4-5 랜덤 함수로 동전 던지기 게임을 만들자 , 105쪽
#
import random                   # 랜덤 묘듈 삽입

print("동전 던지기 게임을 시작합니다.")
coin  = random.randrange(2)     # randrange(2)는 0 or 1을 반환한다.
if coin == 0 :
    print("앞면입니다.")

else :
    print("뒷면입니다.")

print("게임이 종료되었습니다.")
print('프로그램을 종료합니다.')
