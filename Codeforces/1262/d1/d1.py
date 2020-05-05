import math, collections, sys
input = sys.stdin.readline
n = int(input())
a = list(map(int, input().split()))
m = int(input())
d = collections.defaultdict(list)
for i in range(n):
    d[a[i]].append(i)
z = []
for i in d.items():
    z.append(i)
z.sort()
for i in range(m):
    k, pos = map(int, input().split())
    index = -1
    ans = []
    while k:
        if k >= len(z[index][1]):
            for val in z[index][1]:
                ans.append(val)
            k-=len(z[index][1])
        else:
            for x in range(k):
                ans.append(z[index][1][x])
            k = 0
        index-=1
    ans.sort()
    print(a[ans[pos-1]])