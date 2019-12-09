for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    print(min(n-2, a[-2]-1))