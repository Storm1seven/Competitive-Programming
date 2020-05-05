from sys import stdout
from collections import defaultdict
d = defaultdict(int)
n, k = map(int, input().split())
for i in range(1, k+2):
    array = ['?']
    for j in range(1, k+2):
        if j != i:
            array.append(j)
    print(*array)
    stdout.flush()
    pos, apos = map(int, input().split())
    d[apos]+=1
element = max(d.keys())
print('!', d[element])