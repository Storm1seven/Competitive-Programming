import math, collections, sys
input = sys.stdin.readline
s = input()
t = input()
v = ord(t[0]) - ord(s[0])
h = int(t[1]) - int(s[1])
if v < 0:
    vd = 'L'
elif v > 0:
    vd = 'R'
if h < 0:
    hd = 'D'
elif h > 0:
    hd = 'U'
dia = min(abs(v), abs(h))
ans = []
for i in range(dia):
    ans.append(vd+hd)
for i in range(abs(v)-dia):
    ans.append(vd)
for i in range(abs(h)-dia):
    ans.append(hd)
print(len(ans))
for i in ans:
    print(i)