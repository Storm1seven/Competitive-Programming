for _ in range(int(input())):
    s = input()
    ans = []
    flag = 0
    tflag = 1
    d = {'a':'b', 'b':'c', 'c':'a'}
    for i in s:
        if i == '?':
            if ans:
                ans.append(d[ans[-1]])
            else:
                ans.append('a')
            flag = 1
        else:
            if not ans:
                ans.append(i)
            elif ans[-1] == i:
                if flag:
                    x = ans.pop()
                    ans.append(d[x])
                    ans.append(i)
                    flag = 0
                else:
                    tflag = 0
            else:
                ans.append(i)
            flag = 0
    if tflag:
        print("".join(ans))
    else:
        print(-1)