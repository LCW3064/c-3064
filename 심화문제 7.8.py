#
# 20193064 이창우
# LAB 8-3 파티 동시 참석자 알아내기, 210쪽
#

n = int(input("n을 입력하시오 : "))

k,a=0,[[0]*n for i in range(n)]
for p in range(n):
    if p % 2 == 0 :
        for q in range(n):
            k+=1
            a[p][q]=k
    else :
        for q in range(n,0,-1):
            k+=1
            a[p][q-1]=k

for p in range(n):
    for q in range(n):
        print("{:2d}".format(a[p][q]),end=" ")
    print("")

            
