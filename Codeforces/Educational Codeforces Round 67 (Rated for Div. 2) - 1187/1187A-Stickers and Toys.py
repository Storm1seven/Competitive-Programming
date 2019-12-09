for _ in range(int(input())):
    n, s, t = map(int, input().split())
    rep = s+t-n
    print(max(s-rep, t-rep)+1)