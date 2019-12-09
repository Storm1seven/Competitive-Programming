n = int(input())
a = [[0 for i in range(n)] for i in range(n)]
num = 1
for i in range(n):
    for j in range(n):
        if i%2:
            a[n-j-1][i] = num
        else:
            a[j][i] = num
        num+=1
for i in a:
    print(*i)