n, a, b, c = map(int, input().split())
d = {'A':a, 'B':b, 'C':c}
ans = []
def move(inc, dec):
    d[inc]+=1
    d[dec]-=1
    ans.append(inc)
q = []
for i in range(n):
    q.append(input())
for i in range(n):
    x = q[i][0]
    y = q[i][1]
    if d[x] == 0 and d[y] == 0:
        print("No")
        exit()
    if d[x] == 1 and d[y] == 1:
        if i == n-1:
            move(x, y)
            continue
        if x in q[i+1]:
            move(x, y)
        else:
            move(y, x)
    else:
        if d[x] >= d[y]:
            move(y, x)
        else:
            move(x, y)
print("Yes")
print(*ans, sep = '\n')