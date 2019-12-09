import math
from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, s = mapin()
v = listin()
if sum(v) < s:
 print(-1)
elif sum(v) == s:
 print(0)
else:
 v.sort()
 t = sum(v) - v[0]*n
 if s <= t:
  print(v[0])
 else:
  s-=t
  v = [v[0]]*n
  k = math.ceil(s/n)
  print(v[0] - k)