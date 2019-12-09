n=int(input())
a = [[]]
for _ in range(n):
 a.append(tuple(map(int, input().split())))
ans=[1]
i=1
while len(ans)<n:
    if a[i][0]!=1 and a[i][1] in a[a[i][0]]:
        ans.append(a[i][0])
        i=a[i][0]
    else:
        ans.append(a[i][1])
        i=a[i][1]
print(*ans)