def func(x):
    return len(x)
for _ in range(int(input())):
    n = int(input())
    z = []
    for i in range(n):
        z.append(input())
    c1, c0 = 0, 0
    for i in z:
        c1+=i.count("1")
        c0+=i.count("0")
    flag = 0
    for i in z:
        if len(i)%2:
            flag = 1
    if c1%2 or c0%2:
        if flag:
            print(n)
        else:
            print(n-1)
    else:
        print(n)