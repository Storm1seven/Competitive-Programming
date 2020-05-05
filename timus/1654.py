s = input()
z = []
for i in s:
    if not z:
        z.append(i)
    else:
        if z[-1] == i:
            z.pop()
        else:
            z.append(i)
print(''.join(z))