n = int(input())
s = input()
z = [i for i in s]
if len(set(z)) == 1:
    print(0)
    exit()
ans = []
i = 0
while i < n-1:
    if z[i] == 'B':
        i+=1
    else:
        if z[i+1] == 'W':
            z[i] = 'B'
            z[i+1] = 'B'
            ans.append(i+1)
            i+=2
        else:
            z[i] = 'B'
            z[i+1] = 'W'
            ans.append(i+1)
            i+=1
if len(set(z)) == 1:
    print(len(ans))
    print(*ans)
    exit()
z = [i for i in s]
ans = []
i = 0
while i < n-1:
    if z[i] == 'W':
        i+=1
    else:
        if z[i+1] == 'B':
            z[i] = 'W'
            z[i+1] = 'W'
            ans.append(i+1)
            i+=2
        else:
            z[i] = 'W'
            z[i+1] = 'B'
            ans.append(i+1)
            i+=1
if len(set(z)) == 1:
    print(len(ans))
    print(*ans)
else:
    print(-1)