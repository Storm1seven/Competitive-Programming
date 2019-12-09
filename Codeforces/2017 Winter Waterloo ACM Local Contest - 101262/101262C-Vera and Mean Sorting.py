import math
n,k=map(int,input().split())
if(k<math.ceil(n/2)):
 print(0)
else:
 if n%2 == 0:
  a = [2*i for i in range(1, n//2+1)]
  a+=[2*i+1 for i in range(0, n//2)]
 else:
  a = [2*i for i in range(1, n//2+1)]
  a.append(n)
  a+=[2*i+1 for i in range(0, n//2)]
 i = n//2
 for j in range(k-((n+1)//2)):
  a = a[:i-1]+[a[-1]]+a[i-1:-1]
  i-=1
 print(*a)