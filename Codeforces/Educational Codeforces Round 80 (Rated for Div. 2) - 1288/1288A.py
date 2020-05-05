import math
def case():
    n, d = map(int, input().split())
    if d <= n:
        print("YES")
        return 
    for i in range(1, n+1):
        if i + math.ceil(d/(i+1)) <= n:
            print("YES")
            return
    print("NO")
for _ in range(int(input())):
    case()