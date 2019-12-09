import math
for _ in range(int(input())):
 l, r = map(int, input().split())
 if r%2 == 0:
  ans = r//2
 else:
  ans = -(r//2 + 1)
 if (l-1)%2 == 0:
  ans-=(l-1)//2
 else:
  ans+= (l-1)//2 +1
 print(ans) 