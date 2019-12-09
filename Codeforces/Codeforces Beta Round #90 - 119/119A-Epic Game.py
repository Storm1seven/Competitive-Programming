import math
a, b, n = map(int, input().split())
i = 1
while True:
 if i%2 == 1:
  n-=math.gcd(a, n)
 else:
  n-=math.gcd(b, n)
 if n < 0:
  if i%2 == 1:
   print(1)
  else:
   print(0)
  break
 i+=1