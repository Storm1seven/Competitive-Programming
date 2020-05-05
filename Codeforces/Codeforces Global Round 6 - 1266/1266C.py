r, c = map(int, input().split())
a = [[0 for i in range(c)] for i in range(r)]
if r == c and r == 1:
    print(0)
    exit()
if c == 1:
    for i in range(2, r+2):
        print(i)
    exit()
for i in range(r):
    for j in range(c):
        a[i][j] = (i+1)*(j+1+r)
for i in a:
    print(*i)