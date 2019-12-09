import math
a = sum(list(map(int, input().split())))
b = sum(list(map(int, input().split())))
n = int(input())
if math.ceil(a/5) + math.ceil(b/10) <= n:
 print('YES')
else:
 print('NO')