def solve():
    n, c = map(int, input().split())
    a = list(map(int, input().split()))
    s = sum(a)
    if s <= c:
        print("Yes")
    else:
        print("No")
for _ in range(int(input())):
    solve()