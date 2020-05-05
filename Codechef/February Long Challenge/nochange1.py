import math
def case():
    n, p = map(int, input().split())
    a = list(map(int, input().split()))
    ans = [0 for i in range(n)]
    for idx, i in enumerate(a):
        if p%i:
            ans[idx] = p//i + 1
            print("YES", *ans)
            return
    for i in range(n-1, -1, -1):
        for j in range(i-1, -1, -1):
            s = p - a[i] + math.ceil(a[i]/a[j])*a[j]
            if s - a[j] < p and s - a[i] < p and s > p:
                ans[i] = p//a[i] - 1
                ans[j] = math.ceil(a[i]/a[j])
                print("YES", *ans)
                return 
    print("NO")
for _ in range(int(input())):
    case()