import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    n = int(input())
    a = listin()
    d = defaultdict(int)
    for i in a:
        d[i]+=1
    z = []
    for i in d.items():
        z.append([i[0], i[1]])
    z.sort()
    p = z[0][0]*z[-1][0]
    flag = True
    for i in z:
        if i[1]%2 == 1:
            print("NO")
            flag = False
            break
    if flag == False:
        continue
    for i in range(len(z)):
        if z[i][0]*z[len(z)-i-1][0] != p or z[i][1] != z[len(z)-i-1][1]:
            print("NO")
            flag = False
            break
    if flag:
        print("YES")