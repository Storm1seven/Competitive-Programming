n, t = map(int, input().split())
a = list(map(int, input().split()))
a = ['x']+a
i = 1
while i < t:
 i = i+a[i]
if i == t:
 print('YES')
else:
 print('NO')