from collections import deque
a = input()
z = deque([a[0]])
i = 1
count = 0
while i < len(a):
    z.append(a[i])
    if len(z) >=2:
        if z[-1] == z[-2]:
            z.pop()
            z.pop()
            count+=1
    i+=1
if count%2:
    print('Yes')
else:
    print('No')