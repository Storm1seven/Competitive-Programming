n = int(input())
ans = []
for i in range(n):
    ans.append([0 for i in range(n)])
c = 0
for k in range(n//4):
    for i in range(n):
        for j in range(4):
            ans[i][k*4 + j] = c
            c+=1
for i in ans:
    print(*i)