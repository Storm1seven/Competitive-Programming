import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    n, k = mapin()
    count = 0
    while True:
        if n%k:
            count+=(n%k)
            n-=(n%k)
        else:
            while n%k == 0:
                n//=k
                count+=1
        if n == 0:
            print(count)
            break