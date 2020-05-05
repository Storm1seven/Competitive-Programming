def case():
    n, k = map(int, input().split())
    ans = n-(n%k)
    if n%k > k//2:
        ans+=k//2
    else:
        ans+=(n%k)
    print(ans)
for _ in range(int(input())):
    case()