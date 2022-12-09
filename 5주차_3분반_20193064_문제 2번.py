import numpy as np

# 1) 
n_arr = np.arange(0,25).reshape(5,5)
print(n_arr)
print()
# 2)

print('첫 원소 : ',n_arr[0,0])
print('마지막 원소 : ',n_arr[-1,-1])
print()

# 3)
print(n_arr[:2,])
print()

# 4)
print(n_arr[2:,])
print()

# 5)
print(n_arr[:,::2])
print()

# 6)
print(n_arr[::2,::2])
print()

# 7)
print(n_arr[:2,].reshape(5,-1))
print('프로그램을 종료합니다.')
