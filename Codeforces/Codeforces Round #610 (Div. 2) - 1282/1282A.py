for _ in range(int(input())):
    a, b, c, r = map(int, input().split())
    a, b = min(a, b), max(a, b)
    if c + r <=  a:
        print(b-a)
    elif c - r >= b:
        print(b-a)
    elif c-r >= a and c+r >= b:
        print(c-r-a)
    elif c-r <= a and c+r <= b:
        print(b-(c+r))
    elif c-r >= a and c+r <= b:
        print(b-a-2*r)
    else:
        print(0)