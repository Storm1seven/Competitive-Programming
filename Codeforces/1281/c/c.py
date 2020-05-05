import math, collections, sys
# input = sys.stdin.readline
mod = 10**9+7
for _ in range(int(input())):
    x = int(input())
    s = [i for i in input()]
    l = len(s)
    for i in range(1, x+1):
        rep = int(s[i-1])-1
        if len(s) < x:
            start = i
            end = len(s)
            for j in range(rep):
                for k in range(start, end):
                    s.append(s[k])
        l = (l + (l-i)*rep)%mod
    print(l)