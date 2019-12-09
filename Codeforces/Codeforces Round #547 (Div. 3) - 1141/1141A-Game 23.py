n, m = map(int, input().split())
if m/n == m//n:
    div = m//n
    count = 0
    while div%2 == 0:
        div//=2
        count+=1
    while div%3 == 0:
        div//=3
        count+=1
    if div == 1:
        print(count)
    else:
        print(-1)
else:
    print(-1)