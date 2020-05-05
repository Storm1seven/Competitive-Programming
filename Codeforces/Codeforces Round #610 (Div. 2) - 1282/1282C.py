def case():
    n, t, a, b = map(int, input().split())
    qtype = list(map(int, input().split()))
    qtime = list(map(int, input().split()))
    z = []
    easy, hard = 0, 0
    for i in range(n):
        easy+=(qtype[i] == 0)
        hard+=(qtype[i] == 1)
        z.append([qtime[i], qtype[i]])
    z.sort()
    ans = 0
    esol, hsol = 0, 0
    for i in z:
        if esol*a + hsol*b < i[0]:
            trem = i[0]-a*esol-b*hsol-1
            exe = min(easy-esol, trem//a)
            trem-=exe*a
            exh = min(hard-hsol, trem//b)
            ans = max(hsol+esol+exe+exh, ans)
        if i[1] == 0:
            esol+=1
        else:
            hsol+=1
    if esol*a + hsol*b <= t:
        trem = t-a*esol-b*hsol
        exe = min(easy-esol, trem//a)
        trem-=exe*a
        exh = min(hard-hsol, trem//b)
        ans = max(hsol+esol+exe+exh, ans)
    print(ans)
for _ in range(int(input())):
    case()