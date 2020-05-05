import math, collections, sys
input = sys.stdin.readline
n = int(input())
a = list(map(int, input().split()))
z = [[a[i], -i] for i in range(n)]
z.sort()
m = int(input())
print(z)
for i in range(m):
    k, pos = map(int, input().split())
    print(z[n-k+pos-1])