n, m = map(int, input().split())
a = list(map(int, input().split()))
dist = a[0] - 1
for i in range(m-1):
 if a[i] <= a[i+1]:
  dist+= a[i+1] - a[i]
 else:
  dist+=n - a[i] + a[i+1]
print(dist) 