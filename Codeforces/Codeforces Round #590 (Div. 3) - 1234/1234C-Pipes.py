import math
from collections import deque, defaultdict
from sys import stdin, stdout
#input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
 for _ in range(int(input())):
    n = int(input())
    a = []
    for i in range(2):
        s = input()
        z = [int(i) for i in s]
        a.append(z)
    i = 0
    j = 0
    move = "l"
    flag = True
    while True:
        # print(i, j)
        # print(a[i][j], move)
        if i == 0:
            if a[i][j] <= 2 and move == "l":
                j+=1
            elif a[i][j] <= 2 and move == "u":
                flag = False
                break
            elif a[i][j] > 2 and move == "u":
                j+=1
                move = "l"
            else:
                i+=1
                move = "d"
        else:
            if a[i][j] <= 2 and move == "d":
                flag = False
                break
            elif a[i][j] <= 2 and move == "l":
                j+=1
            elif a[i][j] > 2 and move == "d":
                j+=1
                move = "l"
            else:
                i-=1
                move = "u"
        if j == n and i == 1:
            break
        elif j == n and i == 0:
            flag = False
            break
    if flag:
        print("YES")
    else:
        print("NO")