def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    for i in range(n):
        a[i]+=k
    count = 0
    for i in a:
        if not i%7:
            count+=1
    print(count)
for _ in range(int(input())):
    solve()