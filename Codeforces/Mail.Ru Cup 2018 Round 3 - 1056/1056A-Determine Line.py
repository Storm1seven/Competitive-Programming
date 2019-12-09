x = []
for _ in range(int(input())):
 a = list(map(int, input().split()))
 x.append(a[1:])
ans = set.intersection(*map(set, x))
print(*ans)