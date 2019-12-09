from collections import deque
n, m = map(int, input().split())
a = list(map(int, input().split()))
c = list(map(int, input().split()))
z = [(c[i], i) for i in range(n)]
z.sort()
z = deque(z)
for _ in range(m):
    t, d = map(int, input().split())
    ans = 0
    t-=1
    k = min(d, a[t])
    a[t]-=k
    ans+=k*c[t]
    d-=k
    while d > 0 and z:
        first = z[0]
        k = min(a[first[1]], d)
        a[first[1]]-=k
        d-=k
        ans+=first[0]*k
        if not a[first[1]]:
            z.popleft()
    if not d:
        print(ans)
    else:
        print(0) 