#
# 20193064 이창우
# LAB 4-4 윤년 판단은 어떻게 하지, 104쪽
#
year = int(input("연도를 입력하시오: "))
if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0 : # 윤년의 조건
    print(year, "년은 윤년입니다.")

else :
    print(year, "년은 윤년이 아닙니다.")
print('프로그램을 종료합니다.')
