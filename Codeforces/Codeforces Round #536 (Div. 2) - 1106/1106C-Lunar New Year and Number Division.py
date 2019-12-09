n = int(input())
a = list(map(int, input().split()))
a.sort()
s = 0
for i in range(n):
    s+=(a[i]+a[n-1-i])**2
print(s//2)