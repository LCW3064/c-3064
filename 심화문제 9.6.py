#
# 20193064 이창우
# LAB 10-6 평균과 중앙값 계산하기, 273쪽
#

import re
k =0
s = 'English = 89, Science = 90, Math = 92, History = 80.'


num = re.findall(r'\d+',s)

n = tuple(map(int,num))
print(sum(n))
print(sum(n)/len(num))
print('프로그램을 종료합니다.')
