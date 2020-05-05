n, m = map(int, input().split())
a = list(input().split())
b = list(input().split())
q = int(input())
for i in range(q):
    x = int(input())
    x-=1
    print(a[x%n]+b[x%m])