#
# 20193064 이창우
# LAB 7-6 도시의 이름과 인구를 튜플로 묶어보자, 192쪽
#

city_info = [('서울', 9765), ('부산', 3441), ('인천', 2954), ('광주', 1501), ('대전', 1531)]

max_pop = 0
min_pop = 99999999999999999
total_pop = 0

max_city = None
min_city = None

# 최대최소 인구와 그 도시 구하는 방법
for city in city_info :
    total_pop += city[1]
    if city[1] > max_pop :
        max_pop = city[1]
        max_city = city
    if city[1] < min_pop :
        min_pop = city[1]
        min_city = city

print('최대인구: {}, 인구: {} 천명'.format(max_city[0], max_city[1]))
print('최소인구: {}, 인구: {} 천명'.format(min_city[0], min_city[1]))
print('리스트 도시 평균 인구: {} 천명'.format(total_pop / len(city_info)))
print('프로그램을 종료합니다.')
