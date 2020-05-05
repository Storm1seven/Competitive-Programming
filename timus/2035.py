a, b, c = map(int, input().split())
if a+b < c:
    print("Impossible")
else:
    if a < c:
        print(a, c-a)
    else:
        print(c, 0)