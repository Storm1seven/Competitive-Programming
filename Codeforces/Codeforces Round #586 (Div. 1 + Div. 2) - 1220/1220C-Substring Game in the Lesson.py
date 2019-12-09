import math
from collections import deque, defaultdict
from sys import stdin, stdout
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
s = input()
z = defaultdict(int)
for i in s:
    z[i]+=1
    for j in "abcdefghijklmnopqrstuvwxyz":
        if j == i:
            print("Mike")
            break
        else:
            if z[j]:
                print("Ann")
                break