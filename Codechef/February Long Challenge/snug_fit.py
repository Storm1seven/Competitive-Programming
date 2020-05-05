def case():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()
    b.sort()
    ans = 0
    for i in range(n):
        ans+=min(a[i], b[i])
    print(ans)
for _ in range(int(input())):
    case()