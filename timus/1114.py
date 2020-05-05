def fact(n):
    if n == 0:
        return 1
    return n*fact(n-1)

n, a, b = map(int, input().split())
x = 1
y = 1
for i in range(n+1, n+a+1):
    x*=i
for i in range(n+1, n+b+1):
    y*=i
x//=fact(a)
y//=fact(b)
print(x*y)