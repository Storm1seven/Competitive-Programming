for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    if c == d:
        if a == b:
            print("YES")
        else:
            print("NO")
    else:
        if abs(b-a)%abs(c-d):
            print("NO")
        else:
            print("YES")