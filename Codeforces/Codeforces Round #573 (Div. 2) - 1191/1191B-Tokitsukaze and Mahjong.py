import math
from collections import deque, defaultdict
from sys import stdin, stdout
#input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
s = list(input().split())
z = set(s)
if len(z) == 1:
    print(0)
elif len(z) == 2:
    print(1)
else:
    counter = defaultdict(int)
    for i in s:
        counter[i[1]]+=1
    for i in counter.items():
        if i[1] == 3:
            a = []
            for j in s:
                a.append(int(j[0]))
            a.sort()
            if abs(a[0] - a[1])  == 1 and a[-1] - a[1] == 1:
                print(0)
            elif abs(a[0]-a[1]) <= 2 or abs(a[-1] - a[1]) <= 2 or abs(a[-1]-a[0]) <= 2:
                print(1)
            else:
                print(2)
            exit()
        elif i[1] == 2:
            a = []
            for j in s:
                if j[1] == i[0]:
                    a.append(int(j[0]))
            if abs(a[0]-a[1]) <= 2:
                print(1)
                exit()
    print(2)