n, m = map(int, input().split())
if n <= m:
    print(2*(n-1))
else:
    print(2*(m-1)+1)