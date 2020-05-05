from sys import stdin
input = stdin.readline
n = int(input())
s = []
count = 0
sortcount = 1
for i in range(n):
    z = list(map(int, input().split()))[1:]
    if z != sorted(z, reverse = True):
        count+=2*n - sortcount
        sortcount+=2
    else:
        s.append([z[0], z[-1]])
s.sort(reverse = True)
if s:
    dmax = [0 for i in range(s[0][0]+5)]
    for i in s:
        dmax[i[0]]+=1
    for i in range(len(dmax)-1, 0, -1):
        dmax[i-1]+=dmax[i]
    for i in s:
        count+=dmax[i[1]+1]
print(count)