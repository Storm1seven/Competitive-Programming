n = int(input())
a = list(map(int, input().split()))
n, p, z = [], [], []
flagn, flagp = 0, 0
cpos = 0
for i in a:
    if i > 0:
        cpos+=1
if cpos:
    for i in a:
        if i < 0:
            if not flagn:
                n.append(i)
                flagn+=1
            else:
                z.append(i)
        elif i > 0:
            if not flagp:
                p.append(i)
                flagp+=1
            else:
                z.append(i)
        else:
            z.append(i)
else:
    for i in a:
        if i < 0:
            if not flagn:
                n.append(i)
                flagn+=1
            else:
                if len(p) < 2:
                    p.append(i)
                else:
                    z.append(i)
        else:
            z.append(i)
print(len(n), *n)
print(len(p), *p)
print(len(z), *z)