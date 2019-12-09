from collections import defaultdict
n = int(input())
a = list(map(int, input().split()))
k = set(a)
z = sum(a)
k = defaultdict(int)
for i in a:
 k[i]+=1
ans = []
for i in range(n):
 if (z - a[i])/2 in k:
  if (z - a[i])/2 == a[i]:
   if k[a[i]]>1:
    ans.append(i+1)
  else:
   ans.append(i+1)
if len(ans)!=0:
 print(len(ans))
 print(' '.join(map(str, ans)))
else:
 print(0)