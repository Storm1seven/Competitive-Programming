import math
def case():
    r, b, k = map(int, input().split())
    r, b = min(r, b), max(r, b)
    g = math.gcd(r, b)
    if math.ceil((b-g)/r) >= k:
        print('REBEL')
    else:
        print('OBEY')
for _ in range(int(input())):
    case()