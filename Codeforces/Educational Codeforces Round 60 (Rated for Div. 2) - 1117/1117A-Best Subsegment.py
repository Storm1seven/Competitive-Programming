from sys import stdin
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = listin()
z = max(a)
mcount = 0
count = 0
for i in a:
    if i == z:
        count+=1
    else:
        mcount = max(count, mcount)
        count = 0
mcount = max(mcount, count)
print(mcount)