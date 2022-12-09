bae = []
n = int(input("n을 입력하시오 : "))
for i in range(n):
    temp = [n*i+j+1 for j in range(n)]
    if i % 2 == 1:
        bae.append(temp[::-1])
    else :
        bae.append(temp)

for a in bae :
    for b in a :
        print('{:3d}'.format(b), end='')
    print("\n")
print('프로그램을 종료합니다.')
