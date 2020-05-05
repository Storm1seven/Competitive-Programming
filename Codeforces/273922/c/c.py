import math, collections, sys
input = sys.stdin.readline
n, k = map(int, input().split())
a = list(map(int, input().split()))
l = 0
r = 0
maxval = 0
maxl = -1
maxr = -1
curr = 0
while r < n:
    while curr <= k and r < n:
        if not a[r]:
            curr+=1
        r+=1
    while curr > k:
        if not a[l]:
            curr-=1
        l+=1
    if r-l > maxval:
        maxval = r-l
        maxl = l
        maxr = r
ans = []
for i in range(n):
    if i < maxl or i > maxr:
        ans.append(a[i])
    else:
        ans.append(1)
z = []
for i in ans:
    if not z:
        z.append([i, 1])
        continue
    if z[-1][0] == i:
        z[-1][1]+=1
    else:
        z.append([i, 1])
maxlen = 0
for i in z:
    if i[0] == 1:
        maxlen = max(maxlen, i[1])
print(maxlen)
print(*ans)