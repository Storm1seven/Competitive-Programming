import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = []
for i in range(n):
    a.append(float(input().strip()))
z = [int(i) for i in a]
diff = sum(z)
if diff == 0:
    for i in z:
        print(i)
elif diff > 0:
    for i in range(n):
        if z[i] != a[i] and z[i] <= 0 and a[i] <=0 and diff:
            print(z[i]-1)
            diff-=1
        else:
            print(z[i])
else:
    for i in range(n):
        if z[i]!=a[i] and z[i] >= 0 and a[i]>=0 and diff!=0:
            print(z[i]+1)
            diff+=1
        else:
            print(z[i])