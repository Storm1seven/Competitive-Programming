n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
a.sort()
z = sum(a)
for i in b:
    print(z-a[-i])