import math
from collections import deque, defaultdict
from sys import stdin, stdout
#input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
s = input()
count = 0
for i in range(n):
    if int(s[i])%2 == 0:
        count+=i+1
print(count)