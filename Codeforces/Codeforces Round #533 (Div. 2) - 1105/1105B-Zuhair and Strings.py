from collections import defaultdict
n, k = map(int, input().split())
s = input()
d = defaultdict(int)
sample = s[0]
count = 1
for i in range(1, n):
 if s[i] == sample[-1]:
  count+=1
 else:
  d[s[i-1]]+=count//k
  count = 1
  sample = s[i]
if count:
 d[s[-1]]+=count//k
if len(set(s)) == 1:
 print(n//k)
else:
 print(max(d.values()))