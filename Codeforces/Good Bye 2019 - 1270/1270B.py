def case():
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n-1):
        if abs(a[i]-a[i+1]) >= 2:
            print("YES")
            print(i+1, i+2)
            return
    print("NO")
for _ in range(int(input())):
    case()