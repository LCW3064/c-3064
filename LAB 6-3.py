#
# 20193064 이창우
# LAB 6-3 주급 계산 프로그램, 159쪽
#

def weeklyPay(rate, hour) :
    if(hour>30) :
        money = rate * 30 + rate * 1.5 * (hour - 30) # 근무시간이 30시간 초과일 때 계산법
    else :
        money = rate * hour
    return money

r = int(input("시급을 입력하시오 : "))               # 시급 입력받기
h = int(input("근무 시간을 입력하시오: "))           # 근무시간 입력받기
print("주급은 " + str(weeklyPay(r,h)))
print('프로그램을 종료합니다.')
