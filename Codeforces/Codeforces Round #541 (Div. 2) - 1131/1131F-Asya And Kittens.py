n = int(input())
head = list(range(n + 1))
groups = [[i] for i in range(n + 1)]
for _ in range(n - 1):
    x, y = map(int, input().split())
    x, y = head[x], head[y]
    if len(groups[x]) < len(groups[y]):
        x, y = y, x
    groups[x] += groups[y]
    for z in groups[y]:
        head[z] = x
print(*groups[head[1]])