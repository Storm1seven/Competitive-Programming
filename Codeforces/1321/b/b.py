import sys
from collections import deque, defaultdict
import bisect
input = sys.stdin.readline
n = int(input())
b = list(map(int, input().split()))
d = []
m = b[0]
for i in range(n):
    flag = False
    for j in d:
        if i - j[-1] == b[i] - b[j[-1]]:
            j.append(i)
            flag = True
            break
    if not flag:
        d.append([i])
ans = 0
for i in d:
    ans1 = 0
    for j in i:
        ans1+=b[j]
    ans = max(ans, ans1)
print(ans)