from sys import stdin
input = stdin.readline
def expand(a, b, delta, n, m):
    if a+delta <= n-1 and a-delta >= 0 and b+delta <= m-1 and b-delta >= 0:
        return True
    return False
def case():
    n, m = (map(int, input().split()))
    z = []
    for i in range(n):
        z.append(list(map(int, input().split())))
    count = n*m
    for i in range(n):
        for j in range(m):
            delta = 1
            while expand(i, j, delta, n, m):
                if z[i+delta][j] == z[i-delta][j] and z[i][j+delta] == z[i][j-delta]:
                    count+=1
                else:
                    break
                delta+=1
    print(count)
for _ in range(int(input())):
    case()