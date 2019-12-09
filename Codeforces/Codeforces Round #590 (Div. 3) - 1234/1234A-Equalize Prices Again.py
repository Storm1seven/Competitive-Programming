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
    s = sum(a)*1.0
    print(int(math.ceil(s/n)))