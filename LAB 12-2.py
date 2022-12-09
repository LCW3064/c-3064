#
# 20193064 이창우
# LAB 12-2 판다스로 울릉도의 바람 세기 분석하기, 322쪽
#
import pandas as pd
import matplotlib.pyplot as plt

weather = pd.read_csv('d:/data/weather.csv',encoding='CP949')
monthly = [None for x in range(12)]     # 달별로 구분된 12개의 데이터프레임
monthly_wind = [0 for x in range(12)]   # 각 달의 평균 풍속을 담을 리스트
# 마지막에 해당 행의 데이터가 측정된 달을 기록한 열 추가
weather['month'] = pd.DatetimeIndex(weather['일시']).month

for i in range(12):
    monthly[i]= weather[weather['month'] == i +1 ]          # 달별로 분리
    monthly_wind[i] = monthly[i].mean()['평균 풍속(m/s)']   # 개별 데이터 분석

plt.plot(monthly_wind,'red')
plt.show()

print('프로그램을 종료합니다.')
