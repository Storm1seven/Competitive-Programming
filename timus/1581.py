n = int(input())
a = list(map(int, input().split()))
z = []
for i in a:
    if not z:
        z.append([i, 1])
        continue
    if z[-1][0] == i:
        z[-1][1]+=1
    else:
        z.append([i, 1])
for i in z:
    print(i[1], i[0], end = " ")
print()