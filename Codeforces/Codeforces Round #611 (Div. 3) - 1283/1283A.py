def case():
    h, m = map(int, input().split())
    minpassed = h*60+m
    print(24*60 - minpassed)
for _ in range(int(input())):
    case()