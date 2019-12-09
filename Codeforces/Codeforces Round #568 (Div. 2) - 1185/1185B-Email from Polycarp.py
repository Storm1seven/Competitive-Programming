import math
from collections import deque, defaultdict
from sys import stdin, stdout
#input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    a = input()
    b = input()
    x = []
    y = []
    for i in a:
        if x:
            if x[-1][0] == i:
                x[-1][1]+=1
            else:
                x.append([i, 1])
        else:
            x.append([i, 1])
    for i in b:
        if y:
            if y[-1][0] == i:
                y[-1][1]+=1
            else:
                y.append([i, 1])
        else:
             y.append([i, 1])
    flag = 0
    if len(x) == len(y):
        for i in range(len(x)):
            if x[i][0] != y[i][0] or x[i][1] > y[i][1]:
                flag = 1
        if flag:
            print("NO")
        else:
            print("YES")
    else:
        print("NO")