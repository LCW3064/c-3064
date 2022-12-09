#
# 20193064 이창우
# LAB 5-10, 사용자가 입력하는 숫자의 합을 계산하자
#

total = 0
answer = 'yes'
while answer == 'yes':
    number = int(input('숫자를 입력하시오: '))
    total += number                             # total = total+number와 동일하다.
    answer = input('계속?(yes/no): ')           # no할 경우 반복문 종료

print('합계는 : ', total)
print('프로그램을 종료합니다.')
