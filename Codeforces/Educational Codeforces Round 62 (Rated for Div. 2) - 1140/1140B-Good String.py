for _ in range(int(input())):
    n = int(input())
    s = input()
    a = []
    p = s.find('>')
    q = s[::-1].find('<')
    if p == -1:
        print(q)
    elif q == -1:
        print(p)
    else:
        print(min(p, q))