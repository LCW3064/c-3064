#
# 20193064 이창우
# LAB 8-3 파티 동시 참석자 알아내기, 210쪽
#

fruit_list = ['banana', 'orange', 'kiwi', 'apple', 'melon']

mx = 0
k = len(fruit_list)

for i in range(k):
    j = len(fruit_list[i])

    if j > mx:
        mx = len(fruit_list[i])
        a = fruit_list[i]

    elif mx == j:
            b = fruit_list[i]

print("가장 길이가 긴 문자열 : {}, {}".format(a,b))
fruit_list.remove(a)
fruit_list.remove(b)
print("fruit_list = {}".format(fruit_list))
        
