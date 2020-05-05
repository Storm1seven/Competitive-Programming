n = int(input())
z = []
for i in range(n):
    z.append(list(map(int, input().split())))
z.sort()
t = 0
ans = 0
for i in z:
    if t < i[0]:
        t = i[0]
    t+=i[1]
    ans = max(ans, t-i[2])
print(ans)