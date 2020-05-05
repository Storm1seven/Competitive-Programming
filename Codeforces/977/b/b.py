import math, collections, sys
input = sys.stdin.readline
d = collections.defaultdict(int)
n = int(input())
s = input()
for i in range(n-1):
    d[s[i]+s[i+1]]+=1
z = []
for i in d.items():
    z.append([i[1], i[0]])
z.sort()
print(z[-1][1])