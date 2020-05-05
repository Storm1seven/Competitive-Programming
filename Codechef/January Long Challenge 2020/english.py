def getCommonLength(a, b):
    i, j = 0, 0
    while i < len(a) and j < len(b):
        if a[i] == b[j]:
            i+=1
            j+=1
        else:
            break
    return i
def case():
    n = int(input())
    z = []
    for i in range(n):
        z.append(input())
    z.sort()
    i = 1
    prv = i-1
    nxt = i+1
    ans = 0
    while i < n:
        if nxt == -1:
            ans+=getCommonLength(z[prv], z[i])**2
            prv = i-1
            i+=2
        elif prv == -1:
            ans+=getCommonLength(z[nxt], z[i])**2
            i+=2
            nxt = i+1
        elif nxt == prv and nxt == -1:
            break
        else:
            x = getCommonLength(z[prv], z[i])
            y = getCommonLength(z[nxt], z[i])
            if x >= y:
                ans+=x**2
                prv = i-1
                i+=2
                nxt = i+1
            else:
                ans+=y**2
                i+=2
                nxt = i+1
        if nxt > n-1:
            nxt = -1
    print(ans)
for _ in range(int(input())):
    case()