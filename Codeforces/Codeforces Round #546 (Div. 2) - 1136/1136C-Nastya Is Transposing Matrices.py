from collections import defaultdict
n, m = map(int, input().split())
R = n
C = m
def diagonalOrder(matrix) :
    config = []
    for line in range(1, (R + C)) :
        d = defaultdict(int)
        lineconfig = []
        start_col = max(0, line - R) 
        count = min(line, (C - start_col), R) 
        for j in range(0, count) : 
            d[(matrix[min(R, line) - j - 1][start_col + j])]+=1
        for i, j in d.items():
            lineconfig.append((i, j))
        config.append(sorted(lineconfig))
    return config
a = []
b = []
for _ in range(n):
    a.append(list(map(int, input().split())))
for _ in range(n):
    b.append(list(map(int, input().split())))
set_a = diagonalOrder(a)
set_b = diagonalOrder(b)
if set_a == set_b:
    print('YES')
else:
    print('NO')