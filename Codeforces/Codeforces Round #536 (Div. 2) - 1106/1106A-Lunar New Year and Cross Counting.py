n = int(input())
z = []
for _ in range(n):
    z.append(input())
count = 0
for i in range(1, n-1):
    for j in range(1, n-1):
        if {z[i][j], z[i-1][j-1], z[i-1][j+1], z[i+1][j-1], z[i+1][j+1]} == {'X'}:
            count+=1
print(count)