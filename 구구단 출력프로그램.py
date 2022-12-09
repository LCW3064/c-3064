#
# 20193064 이창우
# 3주차 실습 과제 평가
#
print("===========================")
print("===== 20193064 이창우 =====")
print("===== 3주차 과제 결과 =====")
print("===========================")

dan = 2

while dan <= 9 :                                                        # 구구단은 9단까지 있으므로 반복을 9까지한다.

    print("몇단까지 출력할까요(2~9단, 나머지 정수 값 입력 시 종료됨)")
    dan = int(input(">> "))
    j=1
    if 1< dan < 6 :                                                     # 2단부터 5단까지 출력 방법
        for i in range(1,10) :
            for dan in range(2, dan+1) :
                print("{0:3d} X {1} = {2:<4d} ".format(dan, i, dan * i), end="")
            print()

    elif 6 <= dan <= 9 :                                                
        for i in range(1,10) :
            for j in range(2, 6) :
                print("{0:3d} X {1} = {2:<4d} ".format(j, i, j * i), end="")
            print()
        print()

        for i in range(1,10) :                                          # 6단부터 9단까지 출력 방법
            for dan in range(6, dan+1) :
                print("{0:3d} X {1} = {2:<4d} ".format(dan, i, dan * i), end="")
            print()
        print()

    else :

        print("이용해 주셔서 감사합니다.")
        print("개발자 : 이창우(20193064)")
        break
