n = int(input())
z = []
for i in range(n):
    z.append(input())
z.sort(key=lambda x:len(x))
for i in range(n-1):
    if z[i] not in z[i+1]:
        print("NO")
        exit()
print("YES")
for i in z:
    print(i) 