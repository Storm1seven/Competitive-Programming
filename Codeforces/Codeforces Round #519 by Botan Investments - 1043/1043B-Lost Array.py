n = int(input())
a = [0]
a += list(map(int, input().split()))
count = 0
ans = []
z = []
for i in range(1, n+1):
 z.append(a[i]-a[i-1])
for i in range(1, n+1):
 p = z[:i]*(n//i + 1)
 if p[:n] == z:
  count+=1
  ans.append(i)
print(count)
print(' '.join(map(str, ans)))
 