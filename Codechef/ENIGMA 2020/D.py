def case():
    n, p = map(int, input().split())
    s = input()
    s = [i for i in s]
    posA = []
    posB = []
    for i in range(n):
        if s[i] == 'a':
            posA.append(i)
        else:
            posB.append(i)
    posB = posB[::-1]
    newBpos = []
    while posA and posB and p:
        a = posA.pop()
        newBpos.append(a)
        s[a] = 'b'
        s[posB.pop()] = 'a'
        p-=1
    posB+=newBpos
    posB.sort(reverse = True)
    while p and posB:
        s[posB.pop()] = 'a'
        p-=2
    print(''.join(s))
for _ in range(int(input())):
    case()