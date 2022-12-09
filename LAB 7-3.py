#
# 20193064 이창우
# LAB 7-3 도시의 인구 자료에 대한 슬라이싱을 해보자, 180쪽
#

population = ["Seoul", 9765, "Busan", 3441, "Incheon", 2954]

print("서울 인구: {}".format(population[1]))
print("인천 인구: {}".format(population[-1]))

cities = population[0::2]                   # cities에 슬라이싱을 이용해 도시만 추출
print("도시 리스트: {}".format(cities))
pop = population[1::2]                      # pop에 슬라이싱을 이용해 숫자만 추출
print("인구의 합: {}".format(sum(pop)))
