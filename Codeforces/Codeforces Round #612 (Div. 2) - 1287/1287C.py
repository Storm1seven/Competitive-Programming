n = int(input())
a = list(map(int, input().split()))
z = []
if len(set(a)) == 1:
    if len(a) == 1:
        print(0)
    else:
        print(1)
    exit()
even = n//2
odd = n-even
for i in a:
    if i:
        if i%2:
            odd-=1
        else:
            even-=1
for i in a:
    if i == 0:
        if not z:
            z.append(1)
        elif z[-1] != 'o' and z[-1] != 'e':
            z[-1]+=1
        else:
            z.append(1)
    else:
        if i%2 == 0:
            z.append('e')
        else:
            z.append('o')
count = 0
oddneeded, evenneeded = [], []
oddcorner, evencorner = [], []
for i in range(len(z)):
    if z[i]=='o' or z[i]=='e':
        continue
    if i == 0:
        if z[i+1]=='o':
            oddcorner.append([z[i], i])
        else:
            evencorner.append([z[i], i])
    elif i == len(z)-1:
        if z[i-1]=='o':
            oddcorner.append([z[i], i])
        else:
            evencorner.append([z[i], i])
    elif z[i-1] == z[i+1]:
        if z[i-1] == 'o':
            if i != 0 and i != len(z)-1:
                oddneeded.append([z[i], i])
        else:
            if i != 0 and i != len(z)-1:
                evenneeded.append([z[i], i])
    else:
        z[i] = 'e'
oddneeded.sort(reverse = True)
evenneeded.sort(reverse = True)
oddcorner.sort(reverse = True)
evencorner.sort(reverse = True)
while oddneeded:
    if oddneeded[-1][0] <= odd:
        x = oddneeded.pop()
        odd-=x[0]
        z[x[1]] = 'o'
    else:
        break
for i in oddneeded:
    z[i[1]] = 'e'
while oddcorner:
    if oddcorner[-1][0] <= odd:
        x = oddcorner.pop()
        odd-=x[0]
        z[x[1]] = 'o'
    else:
        break
for i in oddcorner:
    z[i[1]] = 'e'
while evenneeded:
    if evenneeded[-1][0] <= even:
        x = evenneeded.pop()
        even-=x[0]
        z[x[1]] = 'e'
    else:
        break
for i in evenneeded:
    z[i[1]] = 'o'
while evencorner:
    if evencorner[-1][0] <= even:
        x = evencorner.pop()
        even-=x[0]
        z[x[1]] = 'e'
    else:
        break
for i in evencorner:
    z[i[1]] = 'o'
for i in range(1, len(z)):
    if (z[i] != z[i-1]):
        count+=1
print(count)