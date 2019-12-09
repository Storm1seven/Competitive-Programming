import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    n, k, d = map(int, input().split())
    a = list(map(int, input().split()))
    s = set([])
    x = defaultdict(int)
    for i in range(d):
        s.add(a[i])
        x[a[i]]+=1
    ans = len(s)
    for i in range(d, n):
        s.add(a[i])
        x[a[i]]+=1
        x[a[i-d]]-=1
        if x[a[i-d]] == 0:
            s.remove(a[i-d])
        ans = min(ans, len(s))
    print(ans)
 