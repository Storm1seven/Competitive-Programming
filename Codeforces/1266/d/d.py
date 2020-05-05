from collections import defaultdict
import sys
input = sys.stdin.readline
n, m = map(int, input().split())
d = defaultdict(int)
for i in range(m):
    u, v, w = map(int, input().split())
    d[u]-=w
    d[v]+=w
ans = 0
pos = []
neg = []
for i in d.items():
    if i[1] < 0:
        neg.append([i[0], i[1]])
    elif i[1] > 0:
        pos.append([i[0], i[1]])
ans = []
while pos and neg:
    pl = pos.pop()
    nl = neg.pop()
    val = min(pl[1], abs(nl[1]))
    ans.append([nl[0], pl[0], val])
    pl[1]-=val
    nl[1]+=val
    if pl[1] != 0:
        pos.append(pl)
    if nl[1] != 0:
        neg.append(nl)
print(len(ans))
for i in ans:
    print(*i)