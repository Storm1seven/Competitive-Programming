import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
l = int(input())
z = []
val = 0
for i in range(l):
    x = input().strip('\n')
    if x == "add":
        if z:
            if z[-1][0] == "add":
                z[-1][1]+=1
            else:
                z.append(["add", 1])
        else:
            z.append(["add", 1])
    elif "f" in x:
        f, n = x.split()
        n = int(n)
        z.append([f, n])
    else:
        if z[-1][0] == "for":
            z.pop()
        else:
            r = 0
            while True:
                last = z.pop()
                if last[0] == "for":
                    r*=last[1]
                    break
                else:
                    r+=last[1]
            z.append(["add", r])
for i in z:
    val+=i[1]
if val <= 2**32-1:
    print(val)
else:
    print("OVERFLOW!!!")