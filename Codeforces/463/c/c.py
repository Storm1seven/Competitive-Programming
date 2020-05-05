import math, collections, sys
input = sys.stdin.readline
n = int(input())
grid = []
for i in xrange(n):
    grid.append(list(map(int, input().split(" "))))
d = [0 for i in xrange(2*n-1)]
pd = [0 for i in xrange(2*n-1)]
for i in xrange(n):
    for j in xrange(n):
        d[i+j]+=grid[i][j]
        pd[i+n-1-j]+=grid[i][j]
odd = [0, 0]
even = [0, 0]
oddval = -1
evenval = -1
for i in xrange(n):
    for j in xrange(n):
        if (i+j)%2:
            if d[i+j]+pd[i+n-1-j] - grid[i][j] > oddval:
                oddval = d[i+j]+pd[i+n-1-j]-grid[i][j]
                odd = [i+1, j+1]
        else:
            if d[i+j]+pd[i+n-1-j] - grid[i][j] > evenval:
                evenval = d[i+j]+pd[i+n-1-j]-grid[i][j]
                even = [i+1, j+1]
print(oddval+evenval)
print odd[0], odd[1], even[0], even[1]