n, t = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
m = a[-1] - a[0]
for i in range(0, t-n+1):
 if -1*(a[i] - a[i+n-1]) < m:
  m = (a[i] - a[i+n-1])*-1
print(m)
   