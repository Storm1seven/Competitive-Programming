import math, collections, sys
input = sys.stdin.readline
n = int(input())
a = list(map(int, input().split()))
z = []
for i in a:
    if i:
        if not z:
            z.append([i])
            continue
        z[-1].append(i)
    else:
        z.append([])
ans = 0
for i in z:
    if not i:
        continue
    l, r = 0, 0
    s = set()
    curr = i[0]
    s.add(0)
    while r < len(i):
        print(l, r, curr, s)
        if curr in s:
            curr-=i[l]
            ans+=r-l
            if l == r:
                r+=1
                if r < len(i):
                    curr+=i[r]
            l+=1
        else:
            s.add(curr)
            r+=1
            if r < len(i):
                curr+=i[r]
    if curr != 0:
        ans+=((r-l)*(r-l+1))//2
print(ans)