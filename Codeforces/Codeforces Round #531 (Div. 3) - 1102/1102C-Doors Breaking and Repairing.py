import math
from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, x, y = mapin()
a = listin()
count = 0
for i in a:
    if i <= x:
        count+=1
if x > y:
    print(n)
else:
    print(math.ceil(count/2))