#
# 20193064 이창우
# LAB 12-4 다양한 방법으로 concat 적용해 보기, 330쪽
#
import pandas as pd

f = pd.read_csv('d:/data/weather.csv',index_col=0,encoding = 'CP949')

print(f.head(3))
print(f.tail(3))
print('프로그램을 종료합니다.')
