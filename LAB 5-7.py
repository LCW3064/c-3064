#
# 20193064 이창우
# LAB 5-7, 입력받은 수를 사용하는 구구단 출력, 130쪽
#

dan = int(input("원하는 단은: "))
i=1

while i<=9 :
    print("{}*{}={}".format(dan,i,dan*i))
    i += 1                                  # i = i + 1 과 동일하다.
