# 매출 관리 프로그램

#상품명, 수량, 단가 입력받기
product = input("상품명? ")
total = int(input("수량? "))
price = int(input("단가? "))

#매출금액
sum = total * price

# 이익금액 계산
if (sum >= 1000000):
    profit = sum * 0.2
else:
    profit = sum * 0.15

print("상품명:",product)
print("매출금액:",sum)
print("이익금",profit)
print('프로그램을 종료합니다.')
