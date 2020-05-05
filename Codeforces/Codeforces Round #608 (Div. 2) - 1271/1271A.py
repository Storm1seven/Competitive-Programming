a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
f = int(input())
if e > f:
    et = min(a, d)
    d-=et
    ft = min(d, b, c)
else:
    ft = min(b, c, d)
    d-=ft
    et = min(d, a)
print(et*e+ft*f)