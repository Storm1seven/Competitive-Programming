n = int(input())
k = list(map(int, input().strip()))
for i in range(1, n):
 k[i]+=k[i-1]
flag = False
s = k[-1]
for i in range(2, n+1):
 if s%i == 0:
  z = set(int(s*j/i) for j in range(1, i+1))
  if z.issubset(set(k)):
   flag = True
 if flag:
  break
if flag:
 print('YES')
else:
 print('NO')