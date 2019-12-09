for _ in range(int(input())):
    s = input()
    z = []
    part = []
    for i in s:
        if not part:
            part.append(i)
        else:
            if part[-1] == i:
                part.append(i)
            else:
                z.append(part)
                part = [i]
    z.append(part)
    ans = set([])
    for i in z:
        if len(i)%2:
            ans.add(i[-1])
    ans = list(ans)
    ans.sort()
    print("".join(ans))