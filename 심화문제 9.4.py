#
# 20193064 이창우
# LAB 10-6 평균과 중앙값 계산하기, 273쪽
#

a = input()
b = input()
new_str1 = []
new_str2 = []
for i in range(len(a)):
    new_str1 += a[i]+b[i]
    new_str2 += a[i]+b[-i-1]
    
print(','.join(new_str1).replace(',',''))
print(','.join(new_str2).replace(',',''))
