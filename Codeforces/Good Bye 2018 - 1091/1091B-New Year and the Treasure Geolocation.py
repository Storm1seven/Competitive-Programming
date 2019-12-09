from sys import stdin, stdout
input = stdin.readline
n = int(input())
o = []
c = []
flag = False
possible = []
for _ in range(n):
 o.append(tuple(map(int, input().split())))
for _ in range(n):
 c.append(tuple(map(int, input().split())))
for i in range(n):
 a = []
 for j in range(n):
  a.append((o[i][0]+c[j][0], o[i][1]+c[j][1]))
 possible.append(a)
 if i >= 1:
  b = set.intersection(*map(set, [possible[-1], possible[-2]]))
  possible.append(b)
  if len(b) == 1:
   print(*list(b)[0])
   flag = True
   break
if not flag:
 print(*possible[-1][0])