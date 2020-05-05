import math
from collections import defaultdict
# input = sys.stdin.readline
n, m = map(int, input().split())
d = defaultdict(int)
z = []
for i in range(n):
    z.append(input())
for i in range(n):
    d[z[i]]+=1
s = ''
for i in z:
    if i != i[::-1]:
        if d[i] and d[i[::-1]]:
            d[i]-=1
            d[i[::-1]]-=1
            s+=i
    else:
        if d[i] > 1:
            d[i]-=2
            s+=i
longest = ''
for i in z:
    if i == i[::-1]:
        if d[i]:
            if len(longest) < len(i):
                longest = i
print(len(s)*2 + len(longest))
print(s+longest+s[::-1])