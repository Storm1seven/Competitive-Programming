def case():
    n = int(input())
    a = list(map(int, input().split()))
    s, x = 0, 0
    for i in a:
        s+=i
        x^=i
    if s == 2*x:
        print(0)
        print()
    else:
        print(2)
        print(x, s+x)
for _ in range(int(input())):
    case()