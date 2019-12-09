from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
a = tuple(mapin())
b = tuple(mapin())
c = tuple(mapin())
a,b,c=sorted([a,b,c])
s = set([])
for i in range(a[0], b[0]+1):
 s.add((i, a[1]))
for i in range(b[0], c[0]+1):
 s.add((i, c[1]))
for i in range(min(a[1],b[1],c[1]), max(a[1],b[1],c[1])+1):
 s.add((b[0], i))
print(len(list(s)))
for i in s:
 print(*i)