#
# 20193064 이창우
# LAB 12-3 울릉도는 몇 월에 바람이 가장 강할까, 324쪽
#
import pandas as pd
import matplotlib.pyplot as plt
import datetime as dt

weather = pd.read_csv('d:/data/weather.csv',encoding='CP949')

weather['month'] = pd.DatetimeIndex(weather['일시']).month
means = weather.groupby('month').mean()
means['평균 풍속(m/s)'].plot(kind = 'bar')

plt.show()
print('프로그램을 종료합니다.')
