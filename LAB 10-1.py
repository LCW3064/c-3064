#
# 20193064 이창우
# LAB \10-1 ndarray 객체를 생성하고 속성을 알아보자, 254쪽
#
import numpy as np

# 실습 1
array_a = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
print('실습 1 : array_a = ',array_a)

# 실습 2
array_b = np.array(range(10))
print('실습 2 : array_b = ',array_b)

# 실습 3
array_c = np.array(range(0,10,2))
print('실습 3 : array_c = ',array_c)

# 실습 4
print('실습 4:')
print('array_c의 shape : ',array_c.shape)
print('array_c의 ndim : ',array_c.ndim)
print('array_c의 ctype : ',array_c.dtype)
print('array_c의 size : ',array_c.size)
print('array_c의 itemsize : ',array_c.itemsize)
print('프로그램을 종료합니다.')
