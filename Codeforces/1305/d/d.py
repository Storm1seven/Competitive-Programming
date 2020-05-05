import sys
from collections import deque, defaultdict
def q(u, v):
    print("? {} {}".format(u, v))
    sys.stdout.flush()
    return int(input())

def a(x):
    print("! {}".format(x))
    sys.stdout.flush()
    exit()

n = int(input())
adj = defaultdict(set)
for i in range(n-1):
    x, y = map(int, input().split())
    adj[x].add(y)
    adj[y].add(x)
leaves = []
for i in adj.items():
    if len(i[1]) == 1:
        leaves.append(i[0])
while len(leaves) > 1:
    u = leaves.pop()
    v = leaves.pop()
    lcs = q(u, v)
    if lcs == u or lcs == v:
        a(lcs)
    for i in adj.items():
        if u in i[1]:
            i[1].remove(u)
        if v in i[1]:
            i[1].remove(v)
    adj.pop(u)
    adj.pop(v)
    leaves = [i[0] for i in adj.items() if len(i[1]) == 1]
a(lcs)
