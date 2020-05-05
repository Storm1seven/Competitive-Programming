import math, collections, sys
input = sys.stdin.readline
def calc(r, c):
    rows = [0 for i in range(r)]
    cols = [0 for i in range(c)]
    total = 0
    for i in range(r):
        for j in range(c):
            if z[i][j] == 'A':
                rows[i]+=1
                cols[j]+=1
                total+=1
    if total == r*c:
        return 0
    if total == 0:
        return "MORTAL"
    if rows[0] == c or rows[-1] == c or cols[0] == r or cols[-1] == r:
        return 1
    if z[0][0] == 'A' or z[0][-1] == 'A' or z[-1][0] == 'A' or z[-1][-1] == 'A':
        return 2
    if max(rows) == c or max(cols) == r:
        return 2
    if rows[0] or rows[-1] or cols[0] or cols[-1]:
        return 3
    return 4
for _ in range(int(input())):
    r, c = map(int, input().split())
    z = []
    for i in range(r):
        z.append(input().strip())
    print(calc(r, c))