n = int(input())
q = list(map(int, input().split()))
delta = 0
for i in range(n-1):
    delta+=(n-1-i)*q[i]
a = (n*(n+1)//2 - delta)/n
if a == a//1:
    z = [int(a)]
    for i in range(n-1):
        z.append(z[-1]+q[i])
    if len(set(z)) == n and 0 < z[0] <= n:
        print(*z)
    else:
        print(-1)
else:
    print(-1)