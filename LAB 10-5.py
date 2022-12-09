#
# 20193064 이창우
# LAB 10-5 2차원 배열에서 특정 조건을 만족하는 행만 추출하기, 265쪽
#
import numpy as np

players = [[170, 76.4],
           [183, 86.2],
           [181, 78.5],
           [176, 80.1]]
np_players =np.array(players)

print('몸무게가 80이상인 선수 정보')
# 몸무게만 따로 검사하기 위해 모든행의 1열만 나오도록 슬라이싱한다.
print(np_players[np_players[:, 1] >= 80.0])

print('키가 180 이상인 선수 정보')
# 키만 검사하기 위해 모든행의 0열만 나오도록 슬라이싱한다.
print(np_players[np_players[:, 0] >= 180.0])
