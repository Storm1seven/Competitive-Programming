def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    x = 0
    for i in a:
        x^=i
    for i in b:
        x^=i
    c = []
    for i in a:
        c.append(i^x)
    b.sort()
    if sorted(c) == b:
        print(*c)
    else:
        print(-1)
for _ in range(int(input())):
    solve()
