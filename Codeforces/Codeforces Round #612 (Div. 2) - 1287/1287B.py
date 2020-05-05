from collections import defaultdict
def getletter(a, b):
    if a == b:
        return a
    str = 'SET'
    for i in str:
        if i != a and i != b:
            return i
n, k = map(int, input().split())
z = []
d = defaultdict(int)
for i in range(n):
    s = input()
    d[s]+=1
    z.append(s)
count = 0
for i in range(n):
    for j in range(i+1, n):
        astr = ''
        for num in range(k):
            astr+=getletter(z[i][num], z[j][num])
        count+=d[astr]
print(count//3)