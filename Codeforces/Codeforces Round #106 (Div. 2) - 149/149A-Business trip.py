k = int(input())
m = list(map(int, input().split()))
m.sort()
count=0
if k > sum(m):
 print(-1)
elif k == 0:
 print(0)
else:
 while k>0:
  k-=m[-1]
  m.pop() 
  count+=1
 print(count)