import math, collections, sys
input = sys.stdin.readline
def solve():
    n = int(input())
    if n == 1:
        print(-1)
        return
    if (n-1)%3:
        print('2'*(n-1)+'3')
    else:
        print('2'*(n-2)+'4'+'3')
for _ in range(int(input())):
    solve()