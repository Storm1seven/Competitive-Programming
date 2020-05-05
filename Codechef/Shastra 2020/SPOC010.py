def brute(a):
    count = 0
    for i in range(a+1):
        z = []
        while i:
            z.append(i%3)
            i//=3
        z = z[::-1]   
        if z.count(2) == 0:
            count+=1
    return count
for n in range(int(input())):
    # n = int(input())
    z = []
    while n:
        z.append(n%3)
        n//=3
    z = z[::-1]
    flag = False
    for i in range(len(z)):
        if z[i] == 2:
            flag = True
        if flag:
            z[i] = 1
    k = 0
    ans = 0
    for i in z:
        if i:
            ans+=2**k
        k+=1
    print(ans == brute(n), n)