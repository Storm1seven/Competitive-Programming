from sys import stdin
input = stdin.readline
x = 0
y = 0
for _ in range(int(input())):
    s, a, b = input().split()
    a = int(a)
    b = int(b)
    if s == '+':
        x = max(x, min(a, b))
        y = max(y, max(a, b))
    else:
        if  x <= min(a,b) and y <= max(a,b) :
            print('YES')
        else:
            print('NO')