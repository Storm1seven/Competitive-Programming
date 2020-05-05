import math, collections, sys
input = sys.stdin.readline
grid = []
for i in range(3):
    grid.append(input().strip())
rowx, rowo = [0, 0, 0], [0, 0, 0]
colx, colo = [0, 0, 0], [0, 0, 0]
xc, oc = 0, 0
for i in range(3):
    for j in range(3):
        if grid[i][j] == 'X':
            rowx[i]+=1
            colx[i]+=1
            xc+=1
        elif grid[i][j] == '0':
            rowo[i]+=1
            colx[i]+=1
            oc+=1
if max(max(rowx), max(colx)) == 3:
    print("first player won")
    exit()
if grid[][0]
if max(max(rowo), max(colo)) == 3:
    print("second player won")
