n = int(input())
a = [0] + list(map(int, input().split())) + [1001]
count = 0
countmax = 0
for i in range(1, n+2):
 if a[i] - a[i-1] == 1:
  count+=1
 else:
  count = 0
 if count > countmax:
  countmax = count
if countmax>0:
 print(countmax - 1)
else:
 print(0)