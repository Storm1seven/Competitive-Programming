for _ in range(int(input())):
    n = int(input())
    a, b = [], []
    for i in range(n):
        l, r = map(int, input().split())
        a.append(l)
        b.append(r)
    temp = []
    a.sort(reverse = True)
    b.sort(reverse = True)
    count = 0
    while a and b:
        if a[-1] <= b[-1]:
            count+=1
            temp.append([count, 'a'])
            a.pop()
        else:
            count-=1
            temp.append([count, 'd'])
            b.pop()
    while a:
        count+=1
        temp.append([count, 'a'])
        a.pop()
    while b:
        count-=1
        temp.append([count, 'd'])
        b.pop()
    flag = False
    ans = 100000000
    for i, j in temp:
        if j == 'a':
            if flag:
                ans = min(ans, i-1)
        else:
            flag = True
    if ans == 100000000:
        print(-1)
    else:
        print(ans)