#
# 20193064 이창우
# LAB 5-5 반복을 이용하여 팩토리얼을 계산하기, 126쪽
#

n=int(input("정수를 입력하시오: "))
fact = 1
for i in range(1,n+1):
   fact *= i                   #fact = fact * i 와 동일하다.

print(n, "!은", fact, "이다.") # print("{}!은 {}이다.".format(n,fact))와 동일하다.
