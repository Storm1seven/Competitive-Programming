import math, collections, sys
input = sys.stdin.readline
n, m, k = map(int, input().split())
p = 4*n*m - 2*n - 2*m
if k > p:
    print("NO")
    exit()
ans = []
for i in range(n-1):
    if not k:
        break
    if (k >= m-1):
        ans.append([m-1, 'R'])
        k-=(m-1)
    elif k:
        ans.append([k, 'R'])
        k = 0
        break
    if k >= 3*(m-1):
        ans.append([m-1, 'DUL'])
        k-=3*(m-1)
    elif k:
        if k > 3:
            ans.append([k//3, 'DUL'])
            k-=(k//3)*3
        if k == 1:
            ans.append([1, 'D'])
        elif k == 2:
            ans.append([1, 'DU'])
        k = 0
        break
    if k:
        ans.append([1, 'D'])
        k-=1
    else:
        k = 0
        break
if k:
    if k >= m-1:
        ans.append([m-1, 'R'])
        k-=(m-1)
    else:
        ans.append([k, 'R'])
        k = 0
if k:
    if k >= m-1:
        ans.append([m-1, 'L'])
        k-=(m-1)
    else:
        ans.append([k], 'L')
        k = 0
if k:
    if k >= (n-1):
        ans.append([n-1, 'U'])
        k-=(n-1)
    else:
        ans.append([k, 'U'])
        k = 0
print("YES")
ans1 = []
for i in ans:
    if i[0]!=0:
        ans1.append(i)
print(len(ans1))
for i in ans1:
    print(*i)