import math, collections, sys
input = sys.stdin.readline
n, a, b, k = map(int, input().split())
h = list(map(int, input().split()))
for i in range(n):
    h[i]%=(a+b)
h.sort()
count = 0
z = []
for i in h:
    if i == 0:
        z.append(math.ceil(b/a))
    elif i <= a:
        count+=1
    else:
        z.append(math.ceil(i/a)-1)
z.sort()
for i in z:
    if i <= k:
        k-=i
        count+=1
print(count)