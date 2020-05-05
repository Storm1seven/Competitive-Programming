from sys import stdout
for _ in range(int(input())):
    n = int(input())
    a = int(input())
    s = 2*10**n+a
    print(s)
    stdout.flush()
    b = int(input())
    print(10**n-b)
    stdout.flush()
    d = int(input())
    print(10**n-d)
    stdout.flush()
    verdict = int(input())
    if verdict == -1:
        exit()