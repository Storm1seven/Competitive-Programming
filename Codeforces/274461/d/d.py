import math, collections, sys
input = sys.stdin.readline
n, k, a, b = map(int, input().split())
z = []
while n:
    if not z:
        if a >= b:
            z.append(['G', 1])
            a-=1
        else:
            z.append(['B', 1])
            b-=1
        n-=1
        continue
    if a >= b:
        if z[-1][1] != k:
            if z[-1][0] == 'G':
                a-=1
                z[-1][1]+=1
            else:
                a-=1
                z.append(['G', 1])
        else:
            if z[-1][0] == 'G':
                if b:
                    b-=1
                    z.append(['B', 1])
                else:
                    print("NO")
                    exit()
            else:
                a-=1
                z.append(['G', 1])
        n-=1
    else:
        if z[-1][1] != k:
            if z[-1][0] == 'B':
                b-=1
                z[-1][1]+=1
            else:
                b-=1
                z.append(['B', 1])
        else:
            if z[-1][0] == 'B':
                if a:
                    a-=1
                    z.append(['G', 1])
                else:
                    print("NO")
                    exit()
            else:
                b-=1
                z.append(['B', 1])
        n-=1
for i in z:
    print(i[0]*i[1], end = "")
print()