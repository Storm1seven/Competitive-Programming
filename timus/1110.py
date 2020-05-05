n, m, y = map(int, input().split())
flag = 0
for i in range(m):
    if pow(i, n, m) == y:
        flag = 1
        print(i, end = " ")
if not flag:
    print(-1)
print()