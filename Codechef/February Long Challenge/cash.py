def case():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    print(sum(a)%k)
for _ in range(int(input())):
    case()