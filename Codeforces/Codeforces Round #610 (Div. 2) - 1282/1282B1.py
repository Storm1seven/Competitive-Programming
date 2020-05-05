for _ in range(int(input())):
    n, p, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    if a[0] > p:
        print(0)
        continue
    s1, s2 = a[0], 0
    i = 1
    count1, count2 = 1, 0
    while i < n:
        if s2+a[i] <= p:
            s2+=a[i]
            i+=2
            count2+=2
        else:
            break
    i = 2
    while s1 < p and i < n:
        if s1+a[i] <= p:
            s1+=a[i]
            i+=2
            count1+=2
        else:
            break
    print(max(count1, count2))