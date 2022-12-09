a = set()
b = set()

n,m = map(int,input().split())

for i in range(n):
    name = input()
    a.add(name)

for i in range(m):
    name = input()
    b.add(name)

k = sorted(a.intersection(b))

print(len(k))

for i in k :
    print(i)
