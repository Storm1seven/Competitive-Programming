def solve():
    n  = int(input())
    a = list(map(int, input().split()))
    z = []
    for i in a:
        if not z:
            z.append(i)
            continue
        if z[-1] == i:
            continue
        else:
            z.append(i)
    print(z)
    for i in range(len(z)):
        if z[i] != min(i+1, len(z)-i-1):
            print("no")
            return
    print("yes")
for _ in range(int(input())):
    solve()