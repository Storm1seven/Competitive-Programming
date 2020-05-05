def case():
    n = int(input())
    a = list(map(int, input().split()))
    for idx, i in enumerate(a):
        if i == 2:
            a[idx] = -1
    count = 0
    if sum(a) == 0:
        print(0)
        return
    x, y = {}, {}
    for i in range(n):
        count+=a[i]
        x[count] = n-(i+1)
    count = 0
    for i in range(2*n-1, n-1, -1):
        count+=a[i]
        y[count] = i-n
    ans = 10**9
    for i in x.keys():
        if -i in y:
            ans = min(ans, x[i]+y[-i])
    if 0 in x:
        ans = min(ans, x[0]+n)
    if 0 in y:
        ans = min(ans, y[0]+n)
    if ans == 10**9:
        print(2*n)
    else:
        print(ans)
for _ in range(int(input())):
    case()