t = int(input())
for i in range(t):
    r, g, b = map(int, input().split())
    r, g, b = sorted([r, g, b])
    if r <= b-g:
        ans = r
        b-=r
        ans+=min(g, b)
    else:
        ans=(b-g)
        r-=(b-g)
        b = g
        r//=2
        b-=r
        g-=r
        ans+=2*r
        ans+=b
    print(ans)