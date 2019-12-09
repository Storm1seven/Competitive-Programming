for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    vis = [0 for i in range(n)]
    for i in  range(n-1):
        if a[i+1] - a[i] == 1:
            vis[i], vis[i+1] = 1, 1
    count = 0
    for i in range(n):
        if vis[i]:
            continue
        count+=1
        if i == n-1:
            continue
        if vis[i+1] == 1:
            vis[i] = 1
        else:
            if a[i+1] - a[i] == 2:
                vis[i+1] = 1
                vis[i] = 1
            else:
                vis[i] = 1
    print(count)