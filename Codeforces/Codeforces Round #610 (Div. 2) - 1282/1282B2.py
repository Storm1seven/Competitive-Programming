for _ in range(int(input())):
    n, p, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    if a[0] > p:
        print(0)
        continue
    ps = 0
    ans = 0
    for i in range(k):
        s = ps
        if s > p:
            continue
        ps+=a[i]
        count = i
        j = i+k-1
        while j < n:
            if s+a[j] <= p:
                s+=a[j]
                j+=k
                count+=k
            else:
                break
        ans = max(ans, count)
    print(ans)