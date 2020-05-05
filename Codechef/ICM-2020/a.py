def case():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    s = sum(a)
    if s%k:
        print("NO")
        return
    if max(a) > s//k:
        print("NO")
        return
    print("YES")
for _ in range(int(input())):
    case()