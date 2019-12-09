import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = list(map(int, input().split()))
a.sort()
d = defaultdict(int)
for i in a:
    flag = True
    for j in d.keys():
        if i%j == 0:
            flag = False
            d[j]+=1
            break
    if flag:
        d[i]+=1
print(len(d))