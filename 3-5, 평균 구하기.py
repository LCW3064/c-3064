#
# 20193064 이창우
# LAB 3-5 평균 구하기 - 연산자 우선순위, 85쪽
#
x = int(input("첫 번째 수를 입력하시오: "))
y = int(input("두 번째 수를 입력하시오: "))
z = int(input("세 번째 수를 입력하시오: "))

avg = (x + y + z) / 3  # 평균은 모두 더한 값을 3으로 나눈다. 즉, 더하기가 나누기 보다 우선이 되어야 한다.
print("평균 =", avg)
