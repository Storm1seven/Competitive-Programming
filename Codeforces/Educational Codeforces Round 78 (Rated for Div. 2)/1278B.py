def check(a, b):
    s = (a*(a+1))//2
    if s < b:
        return 0
    return s%2 == b%2
for _ in range(int(input())):
    a, b = map(int, input().split())
    d = abs(a-b)
    if d == 0:
        print(0)
        continue
    x = 1
    while not check(x, d):
        x+=1
    print(x)