#
# 20193064 이창우
# 2주차 실습과제 평가
#

print("=================================")
print("======== 20193064 이창우 ========")
print("======== 2주차 과제 결과 ========")
print("=================================")

month = int(input("'월'(1~12)입력 :"))
day = int(input("'일'(1~31)입력 :"))

if month == 1 :

    if day == 6 :
        solar_term = "'소한'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 21 :
        solar_term = "'대한'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif 1 <= day <= 31 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")

elif month == 2 :

    if day == 4 :
        solar_term = "'입춘'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 19 :
        solar_term = "'우수'"
        print(month,"월",day,"일은",solar_term,"입니다.")

    elif 1 <= day <= 28 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")

elif month == 3 :

    if day == 6 :
        solar_term = "'경칩'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 21 :
        solar_term = "'춘분'"
        print(month,"월",day,"일은",solar_term,"입니다.")

    elif 1 <= day <= 31 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")

elif month == 4 :

    if day == 5 :
        solar_term = "'청명'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 20 :
        solar_term = "'곡우'"
        print(month,"월",day,"일은",solar_term,"입니다.")

    elif 1 <= day <= 30 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")

elif month == 5 :

    if day == 6 :
        solar_term = "'입하'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 21 :
        solar_term = "'소만'"
        print(month,"월",day,"일은",solar_term,"입니다.")

    elif 1 <= day <= 31 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")


elif month == 6 :

    if day == 6 :
        solar_term = "'망종'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 21 :
        solar_term = "'하지'"
        print(month,"월",day,"일은",solar_term,"입니다.")

    elif 1 <= day <= 30 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")


elif month == 7 :

    if day == 7 :
        solar_term = "'소서'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 23 :
        solar_term = "'대서'"
        print(month,"월",day,"일은",solar_term,"입니다.")

    elif 1 <= day <= 31 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")


elif month == 8 :

    if day == 8 :
        solar_term = "'입추'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 23 :
        solar_term = "'처서'"
        print(month,"월",day,"일은",solar_term,"입니다.")

    elif 1 <= day <= 31 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")


elif month == 9 :

    if day == 8 :
        solar_term = "'백로'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 23 :
        solar_term = "'추분'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        print("그리고 '저의 생일' 이기도 합니다.")

    elif 1 <= day <= 30 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")


elif month == 10 :

    if day == 8 :
        solar_term = "'한로'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 23 :
        solar_term = "'상강'"
        print(month,"월",day,"일은",solar_term,"입니다.")

    elif 1 <= day <= 31 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")


elif month == 11 :

    if day == 7 :
        solar_term = "'입동'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 22 :
        solar_term = "'소설'"
        print(month,"월",day,"일은",solar_term,"입니다.")

    elif 1 <= day <= 30 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")


elif month == 12 :
    if day == 7 :
        solar_term = "'대설'"
        print(month,"월",day,"일은",solar_term,"입니다.")
        
    elif day == 22 :
        solar_term = "'동지'"
        print(month,"월",day,"일은",solar_term,"입니다.")

    elif 1 <= day <= 31 :
        print("입력하신",month,"월",day,"의 절기를 알 수 없습니다.")

    else :
        print("입력하신",month,"월",day,"은 일수를 잘못 입력하셨습니다.")

else :
    print("아쉽지만 입력하신",month,"월",day,"은 양력일자가 아닙니다!!.")



