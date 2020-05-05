import math, collections, sys
input = sys.stdin.readline
q, x = map(int, input().split())
s = set()
mex = 0
z = [0 for i in range(x)]
for _ in range(q):
    y = int(input())
    z[y%x]+=1
    while (z[mex%x]):
        z[mex%x]-=1
        mex+=1
    print(mex)