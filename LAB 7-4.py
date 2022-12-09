#
# 20193064 이창우
# LAB 7-4 오늘의 명언을 골라주는 기증을 만들자, 187쪽
#

import random

# append를 이용한 명언 항목 추가
quotes = []
quotes.append("꿈을 지녀라. 그러면 어려운 현신을 이길 수 있다.")
quotes.append("분노는 바보들의 가슴속에서만 살아간다.")
quotes.append("고생 없이 얻을 수 있는 진실로 귀중한 것은 하나도 없다.")
quotes.append("사람은 사랑할 때 누구나 시인이 된다.")
quotes.append("시작이 반이다.")

print("###############")
print("# 오늘의 명언 #")
print("###############")
print("")

# random.choice()를 이용해 quotes 중에서 무작위 명언 출력
dailyQuotes = random.choice(quotes)
print(dailyQuotes)
print('프로그램을 종료합니다.')
