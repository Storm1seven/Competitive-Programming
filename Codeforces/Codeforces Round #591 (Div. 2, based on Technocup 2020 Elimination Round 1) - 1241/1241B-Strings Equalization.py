import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    s = input()
    t = input()
    flag = 1
    for i in 'abcdefghijklmnopqrstuvwxyz':
        if i in s and i in t:
            print("YES")
            flag = 0
            break
    if flag:
        print("NO")