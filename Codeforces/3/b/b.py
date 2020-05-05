import math, collections, sys
input = sys.stdin.readline
n, v = map(int, input().split())
k, c = [], []
for i in range(n):
    t, p = map(int, input().split())
    if t == 1:
        k.append([p, i+1])
    else:
        c.append([p, i+1])
if len(k)%2:
    k.append([0, 0])
k.sort()
c.sort()
total = 0
z = []
print(k)
print(c)
while v:
    if v == 1:
        break
    cval, kval = 0, 0
    if c:
        cval = c[-1][0]
    if len(k) >= 2:
        kval = k[-1][0]+k[-2][0]
    if cval > kval:
        total+=cval
        z.append(c.pop()[1])
    else:
        total+=kval
        z.append(k.pop()[1])
        z.append(k.pop()[1])
    v-=2
if v:
    if k:
        total+=k[-1][0]
        z.append(k.pop()[1])
        v-=1
print(total)
for i in z:
    if not i:
        continue
    print(i, end = " ")
print()