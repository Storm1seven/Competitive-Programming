import math
n = int(input())
a = list(map(int, input().split()))
k = max(a)
ans = math.ceil((2*sum(a) + 1)/n)
if ans >= k:
 print(ans)
else:
 print(k)