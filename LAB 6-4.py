#
# 20193064 이창우
# 3주차 실습과제평가 2번째
#

def max_and_min(mylist) :
    minValue = 99999999999999999999999999999
    maxValue = -minValue
 
    for value in mylist :               # 가장 큰 값 출력.
        if value > maxValue :
            maxValue = value;
    print("가장 큰 수 : {}".format(maxValue))
    
    for value in mylist :               # 가장 작은 값 출력.
        if value < minValue :
            minValue = value;
    print("가장 작은 수 : {}".format(minValue))
     

n1, n2, n3 = input("3 수를 입력하시오 : ").split()
list_data = [int(n1), int(n2), int(n3)]

max_and_min(list_data)
print('프로그램을 종료합니다.')
