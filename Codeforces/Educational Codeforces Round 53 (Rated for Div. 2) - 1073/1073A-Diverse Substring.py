n = int(input())
a = input()
flag = False
for i in range(1, n):
 if a[i-1]!=a[i]:
  print('YES')
  print(a[i-1]+a[i])
  flag = True
  break
if not flag:
 print('NO')