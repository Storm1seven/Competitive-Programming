from sys import stdin, stdout
import math
n, k = map(int, input().split())
p = bin(n)[2:]
t = p.count('1')
if not(n >= k >= t):
 print('NO')
else:
 n+=1
 print('YES')
 while k:
  val = math.floor(math.log(n - k, 2))
  stdout.write(str(2**val)+' ')
  n-=2**val
  k-=1