n, m = map(int, input().split())
x = list(map(int, input().split()))
x.sort()
d = {}
for i in x:
    d[i] = 1
ans = 0
y = []
i = 0
while len(y) < m:
    if x[i] - 1 not in d:
        ans+=d[x[i]]
        y.append(x[i]-1)
        x.append(x[i]-1)
        d[x[i]-1] = d[x[i]]+1
    if len(y) == m:
        break
    if x[i] + 1 not in d:
        ans+=d[x[i]]
        y.append(x[i]+1)
        x.append(x[i]+1)
        d[x[i]+1] = d[x[i]]+1
    i+=1
print(ans)
print(*y)