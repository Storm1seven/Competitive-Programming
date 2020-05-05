def digitSum(n):
    res = 0
    while n:
        res+=n%10
        n//=10
    return res

n = int(input())
z = []
for i in range(9999, 0, -1):
    if digitSum(i) <= n:
        n-=digitSum(i)
        z.append(i)
if n == 0:
    print(len(z))
    print(*z)
else:
    print(-1)