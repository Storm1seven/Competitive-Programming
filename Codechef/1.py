def solve():
    n, m = map(int, input().split())
    s = input()
    x = s.count('_')
    count = 0
    for i in range(2**x):
        bits = bin(i)[2:].zfill(x)
        z = ''
        underscore = 0
        for i in range(n):
            if s[i] != '_':
                z+=s[i]
            else:
                z+=bits[underscore]
                underscore+=1
        num = int(z, 2)
        if num%m == 0:
            count+=1
    if not x:
        if int(s, 2)%m == 0:
            count+=1
    print(count)
for _ in range(int(input())):
    solve()