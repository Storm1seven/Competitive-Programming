from collections import defaultdict
n = int(input())
a = list(map(int, input().strip()))
d = defaultdict(int)
for i in a:
 d[i]+=1
for i in range(n):
 if a[i] == 2 and d[2] > n//3:
  if d[0] < n//3:
   a[i] = 0
   d[0]+=1
   d[2]-=1
  elif d[1] < n//3:
   a[i] = 1
   d[1]+=1
   d[2]-=1
 elif a[i] == 1 and d[1]>n//3:
  if d[0]<n//3:
   a[i] = 0
   d[0]+=1
   d[1]-=1
for i in range(n-1, -1, -1):
 if a[i] == 0 and d[0]>n//3:
  if d[2] < n//3:
   a[i] = 2
   d[2]+=1
   d[0]-=1
  elif d[1]<n//3:
   a[i] = 1
   d[0]-=1
   d[1]+=1
 elif a[i] == 1 and d[1]>n//3:
  if d[2] < n//3:
   a[i] = 2
   d[2]+=1
   d[1]-=1
print(''.join(map(str, a)))