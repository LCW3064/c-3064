#
# 20193064 이창우
# LAB 10-6 평균과 중앙값 계산하기, 273쪽
#
import string

a = string.ascii_uppercase
b = string.ascii_lowercase

s = input()

for x in s:
    if x.isupper() == False:
        print(x, end ='')

for x in s:
    if x.isupper() == True:
        print(x, end ='')
