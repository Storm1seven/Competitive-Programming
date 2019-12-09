n = int(input())
a = input()
a = [int(i) for i in a]
z = list(map(int, input().split()))
i = 0
while i < n and a[i] >= z[a[i]-1]:
    i+=1
while i < n and a[i] <= z[a[i] -1]:
    a[i] = z[a[i]-1]
    i+=1
print("".join(map(str, a)))