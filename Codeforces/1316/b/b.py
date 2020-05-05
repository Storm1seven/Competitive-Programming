for _ in range(int(input())):
    n = int(input())
    s = input()
    z = []
    for i in range(n):
        if (n-i)%2:
            z.append([s[i:]+s[:i][::-1], i])
        else:
            z.append([s[i:]+s[:i], i])
    z.sort()
    print(z[0][0])
    print(z[0][1]+1)