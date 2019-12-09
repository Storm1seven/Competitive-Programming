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
    z = a+a+a
    start = []
    for i in range(len(z)):
        if z[i] == 1:
            start.append(i)
    start = start[1]
    arr1 = []
    arr2 = []
    for i in range(n):
        arr1.append(z[start+i])
        arr2.append(z[start-i])
    key = [i for i in range(1, n+1)]
    if key == arr1 or arr2 == key:
        print("YES")
    else:
        print("NO")