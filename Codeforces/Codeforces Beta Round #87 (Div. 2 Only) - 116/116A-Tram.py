n = int(input())
cap = 0
maxcap = 0
for _ in range(n):
 o, i = map(int, input().split())
 delta = i - o
 cap += delta
 if cap > maxcap:
  maxcap = cap
print(maxcap)
 