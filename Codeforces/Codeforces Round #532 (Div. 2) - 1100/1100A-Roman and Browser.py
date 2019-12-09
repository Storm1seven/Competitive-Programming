from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, k = mapin()
a = listin()
p, q = a.count(1), a.count(-1)
m = 0
for i in range(n):
    z = []
    c = i
    j = 0
    while True:
        if c+ j*k < n:
            z.append(c+ j*k)
            j+=1
        else:
            break
    j = -1
    while True:
        if c + j*k > -1:
            z.append(c + j*k)
            j-=1
        else:
            break
    p1, q1 = 0, 0
    for t in z:
        if a[t] == -1:
            q1+=1
        else:
            p1+=1
    m = max(m, abs((p - p1) - (q - q1)))
print(m)