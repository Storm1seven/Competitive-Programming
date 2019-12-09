import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    k, n, a, b = map(int, input().split())
    ans = []
    if k <= n*b:
        print(-1)
    else:
        high = n
        low = 0
        while (high >= low):
            mid = (high+low)//2
            if mid*a +(n-mid)*b < k:
                low = mid+1
                ans.append(mid)
            else:
                high = mid-1
        if ans:
            print(max(ans))
        else:
            print(0)