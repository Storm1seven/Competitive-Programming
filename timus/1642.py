import bisect
n, x = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
bisect.insort(a, 0)
pos = a.index(0)
if pos!=0 and pos!=n:
    if a[pos-1] < x and a[pos+1] > x:
        f, b = 0, 0
        if x > 0:
            f+=x
            b-=2*a[pos-1]
            b+=x
        else:
            b-=x
            f+=2*a[pos+1]
            f-=x
        print(f, b)
    else:
        print("Impossible")
elif pos == 0:
    if a[pos+1] > x:
        f, b = 0, 0
        b-=x
        f+=2*a[pos+1]
        f-=x
        print(f, b)
    else:
        print("Impossible")
else:
    if a[pos-1] < x:
        f, b = 0, 0
        f+=x
        b-=2*a[pos-1]
        b+=x
        print(f, b)
    else:
        print("Impossible")