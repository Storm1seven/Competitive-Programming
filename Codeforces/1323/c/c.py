import math, collections, sys
n = int(input())
s = input()
ans = 0
z = [0]
for i in s:
    if i == '(':
        z.append(z[-1]+1)
    else:
        z.append(z[-1]-1)
flag = 0
neg = 0
for i in range(n+1):
    if flag:
        if z[i] == 0:
            ans+=i-neg+1
            flag = 0
    else:
        if z[i] < 0:
            neg = i
            flag = 1
if z[-1] != 0:
    print(-1)
else:
    print(ans)