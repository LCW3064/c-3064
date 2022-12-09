#
# 20193064 이창우
# 3주차 실습 과제 평가 3번째 문제
#

def factorial(n):
    result = 1
    for i in range(1, n+1):
        result *= i             # reslt = result + i와 같다.
    return result
print('프로그램을 종료합니다.')
