from collections import defaultdict
import sys
input = sys.stdin.readline
n = int(input())
a = list(map(int, input().split()))
d = defaultdict(int)
for i in a:
    d[i]+=1
flag = True
if d[0] > 1:
    flag = False
gt1 = 0
for i in d.values():
    if i > 2:
        flag = False
    if i > 1:
        gt1+=1
if gt1 > 1:
    flag = False
z = [i for i in d.items()]
for i, j in z:
    if j >= 2:
        if d[i-1] > 0:
            flag = False
if not flag:
    print("cslnb")
    exit()
av = 0
a.sort()
for i in range(n):
    av+=a[i]-i
if av%2:
    print("sjfnb")
else:
    print("cslnb")
