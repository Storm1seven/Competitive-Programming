n, d = map(int, input().split())
a = list(map(int, input().split()))
count = 0
for i in range(1, n):
 if a[i] < a[i-1]:
  count+=(a[i-1]-a[i])//d +1
  a[i] += ((a[i-1]-a[i])//d +1)*d
 elif a[i] == a[i-1]:
  count+=1
  a[i] +=d
print(count)