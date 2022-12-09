#
# 20193064 이창우
# LAB 3-1 거북이 그래픽으로 숫자를 입력받아 다각형을 그리자, 75쪽
#
import turtle
t = turtle.Turtle()
t.shape("turtle")
n = int(input('몇각형을 그리시겠어요?(3-6): '))

for i in range(n) : # n번만큼 아래 두 문장을 반복한다.
    t.forward(100) # 거북이가 이동하는 거리이다.
    t.left(360 // n) # n각형의 각도만큼 왼쪽으로 이동한다.

turtle.done()
print('프로그램을 종료합니다.')
