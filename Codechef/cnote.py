def solve():
    x, y, k, n = map(int, input().split())
    needed = x-y
    for i in range(n):
        p, c = map(int, input().split())
        if p >= needed and c <= k:
            print("LuckyChef")
            return
    print("UnluckyChef")
for _ in range(int(input())):
    solve()
