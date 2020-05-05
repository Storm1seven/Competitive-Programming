def runcase():
    n, s = map(int, input().split())
    a = list(map(int, input().split()))
    t = 0
    m = 0
    index = 0
    for i in range(n):
        t+=a[i]
        if a[i] > m:
            m = a[i]
            index = i+1
        if t >= s:
            if i == n-1:
                print(0)
            else:
                if a[i+1] >= m:
                    print(0)
                else:
                    print(index)
            return 
    print(0)
for _ in range(int(input())):
 runcase()