from collections import defaultdict
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    z = []
    for i in a:
        if not z:
            z.append([i, 1])
            continue
        if z[-1][0] == i:
            z[-1][1]+=1
        else:
            z.append([i, 1])
    d = defaultdict(int)
    for i in z:
        d[i[0]]+=(i[1]+1)//2
    val = 0
    num = -1
    p = list(set(a))
    p.sort()
    for i in p:
        if d[i] > val:
            val = d[i]
            num = i
    print(num)