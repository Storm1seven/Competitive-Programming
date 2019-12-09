for _ in range(int(input())):
    a, b, c = map(int, input().split())
    ans1 = 0
    ans2 = 0
    a1, b1, c1 = a, b, c
    while(b > 0 and c > 1):
        ans1+=3
        b-=1
        c-=2
    while(a > 0 and b > 1):
        ans1+=3
        b-=2
        a-=1
    while(a1 > 0 and b1 > 1):
        ans2+=3
        b1-=2
        a1-=1
    while(b1 > 0 and c1 > 1):
        ans2+=3
        b1-=1
        c1-=2
    print(max(ans1, ans2))