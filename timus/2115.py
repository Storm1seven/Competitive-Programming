n = int(input())
a = list(map(int, input().split()))
if a == sorted(a) or a == sorted(a, reverse =True):
    print("Nothing to do here")
    exit()
x = sorted(a)
y = sorted(a, reverse = True)
xc, yc = [], []
for i in range(n):
    if a[i]!=x[i]:
        xc.append(i+1)
    if a[i]!=y[i]:
        yc.append(i+1)
if len(xc) == 2:
    print("Yes")
    print(*xc)
elif len(yc) == 2:
    print("Yes")
    print(*yc)
else:
    print("No hope")