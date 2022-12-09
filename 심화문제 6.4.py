#
# 20193064 이창우
# 3주차 실습과제평가 2번째 문제
#


def max_and_min(mylist, method = 'max') :
    minValue = 99999999999999999999999999999
    maxValue = -minValue
    
    if method == 'max' : 
        for value in mylist :               # 가장 큰 값 반환.
            if value > maxValue :
                maxValue = value;
        return maxValue
    elif method == 'min':
        for value in mylist :               # 가장 작은 값 반.
            if value < minValue :
                minValue = value;
        return minValue
    else :
        print("illegal method")

n1, n2, n3 = input("3 수를 입력하시오 : ").split()
list_data = [int(n1), int(n2), int(n3)]

print("가장 큰 수 : {}".format(max_and_min(list_data,'max')))
print("가장 작은 수 : {}".format(max_and_min(list_data,'min')))
print('프로그램을 종료합니다.')
