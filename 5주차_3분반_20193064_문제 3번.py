import numpy as np

x = np.zeros((10,10), int)

x[::2,::2]=1
x[1::2,1::2]=1
print(x)
print()


print()
print('행렬의 행 방향 성분의 합 :')
print(x.sum(axis = 0))
