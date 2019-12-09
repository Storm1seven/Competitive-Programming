n = int(input())
a = list(map(int, input().split()))
z = []
count = 0
for i in range(1, len(a)):
    if a[i-1] == a[i]:
        count+=1
    else:
        z.append(count+1)
        count = 0
z.append(count+1)
m = 0
for i in range(1, len(z)):
    m = max(m, min(z[i-1], z[i]))
print(m*2)