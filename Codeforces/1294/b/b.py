for _ in range(int(input())):
    n = int(input())
    z = []
    for i in range(n):
        z.append(list(map(int, input().split())))
    z.sort()
    ans = ''
    cx, cy = 0, 0
    flag = True
    for i in z:
        if i[0] >= cx and i[1] >= cy:
            ans+='R'*(i[0]-cx)
            ans+='U'*(i[1]-cy)
            cx = i[0]
            cy = i[1]
        else:
            flag = False
        if not flag:
            break
    if flag:
        print("YES")
        print(ans)
    else:
        print("NO")