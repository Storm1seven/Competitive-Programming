import random
def check(x):
    for i in range(len(x)):
        if x[i] == zeroes[i]:
            return False
    return True
n = int(input())
a = list(map(int, input().split()))
s = set([])
zeroes = []
for i in range(n):
    if a[i]:
        s.add(a[i])
    else:
        zeroes.append(i+1)
unused = []
for i in range(1, n+1):
    if i not in s:
        unused.append(i)
while True:
    if check(unused):
        j = 0
        for i in range(n):
            if a[i] == 0:
                a[i] = unused[j]
                j+=1
        break
    random.shuffle(unused)
print(*a)