#
# 20193064 이창우
# LAB 10-6 평균과 중앙값 계산하기, 273쪽
#
import string
num = string.digits
lc = string.ascii_lowercase
uc = string.ascii_uppercase
i = j = k = special = 0

s = input()

for x in s:
    if x in uc:
        i += 1
    elif x in lc:
        j += 1
    elif x in num:
        k += 1
    else :
        special +=1
print(i)
print(j)
print(k)
print(special)
print('프로그램을 종료합니다.')
