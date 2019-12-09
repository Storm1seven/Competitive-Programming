s = input()
count = []
c = 0
for i in s:
    if i == 'v':
        c+=1
    else:
        if c:
            count.append(c-1)
        count.append('x')
        c = 0
if c > 0:
    count.append(c-1)
total = 0
for i in count:
    if i!='x':
        total+=i
curr = 0
ans = 0
for i in count:
    if i == 'x':
        ans+=curr*(total-curr)
    else:
        curr+=i
print(ans)