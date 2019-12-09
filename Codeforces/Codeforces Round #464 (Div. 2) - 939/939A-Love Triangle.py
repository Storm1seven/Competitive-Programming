n = int(input())
a = list(map(int, input().split()))
a = [0]+a
for i in range(1, n):
    if a[a[a[i]]] == i:
        print("YES")
        exit()
print("NO")