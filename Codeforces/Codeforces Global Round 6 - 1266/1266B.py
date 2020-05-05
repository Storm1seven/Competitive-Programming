n = int(input())
a = list(map(int, input().split()))
for i in a:
    if i > 14 and i%14 <= 6 and i%14:
        print("YES")
    else:
        print("NO")