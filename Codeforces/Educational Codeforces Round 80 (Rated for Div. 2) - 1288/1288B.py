z = ['9'*i for i in range(1, 10)]
for i in range(len(z)):
    z[i] = int(z[i])
for _ in range(int(input())):
    a, b = map(int, input().split())
    count = 0
    for i in z:
        if i <= b:
            count+=1
    print(a*count)