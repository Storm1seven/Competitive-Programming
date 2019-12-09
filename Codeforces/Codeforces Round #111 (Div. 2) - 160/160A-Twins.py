n = int(input())
a = list(map(int, input().split()))
a.sort()
a.reverse()
flag = False
for i in range(1, n):
 if sum(a[:i]) > sum(a[i:]):
  print(i)
  flag = True
  break
if not flag:
 print(n)