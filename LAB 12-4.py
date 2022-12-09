#
# 20193064 이창우
# LAB 12-4 다양한 방법으로 concat 적용해 보기, 330쪽
#
import pandas as pd
import matplotlib.pyplot as plt
import datetime as dt

weather = pd.read_csv('d:/data/weather.csv',encoding='CP949')

weather['month'] = pd.DatetimeIndex(weather['일시']).month
means = weather.groupby('month').mean()
means['평균 풍속(m/s)'].plot(kind = 'bar')

plt.show()
