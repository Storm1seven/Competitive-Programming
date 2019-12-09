import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
s = input()
z = deque([])
for i in s:
    if i == "(":
        z.append(i)
    elif i == ")":
        if z:
            if z[-1] == "(":
                z.pop()
            else:
                print("No")
                exit()
        else:
            z.append(i)
if len(z) == 0 or list(z) == [")", "("]:
    print("Yes")
else:
    print("No")