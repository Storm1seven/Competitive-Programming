def case():
    n = int(input())
    a = list(map(int, input().split()))
    z = [0]
    for i in a:
        if i%2 == 0:
            z.append(z[-1]+1)
        else:
            z.append(z[-1])
    q = int(input())
    for i in range(q):
        l, r = map(int, input().split())
        if z[r]-z[l-1]:
            print("EVEN")
        else:
            print("ODD")
for _ in range(int(input())):
    case()