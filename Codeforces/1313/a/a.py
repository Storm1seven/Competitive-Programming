import math, collections, sys
input = sys.stdin.readline
def solve():
    count = 0
    a = list(map(int, input().split()))
    a.sort()
    for i in range(1, 8):
        d = bin(i)[2:].zfill(3)
        flag = True
        for i in range(3):
            if d[i] == '1':
                if not a[i]:
                    flag = False
        if flag:
            for i in range(3):
                if d[i] == '1':
                    a[i]-=1
            count+=1
    print(count)
for _ in range(int(input())):
    solve()