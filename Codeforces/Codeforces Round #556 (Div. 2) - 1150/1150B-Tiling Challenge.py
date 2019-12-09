import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = []
for _ in range(n):
    a.append([i for i in input()])
for i in range(n):
    for j in range(n):
        if a[i][j] == '.':
            if 0<=i-1 and i+1<n and 0<=j and j+1<n:
                if a[i-1][j] == a[i+1][j] == a[i][j+1] == a[i][j-1] == '.':
                    a[i-1][j] = a[i+1][j] = a[i][j+1] = a[i][j-1] = a[i][j] = '#'
for i in range(n):
    if '.' in a[i]:
        print("NO")
        exit()
print("YES")