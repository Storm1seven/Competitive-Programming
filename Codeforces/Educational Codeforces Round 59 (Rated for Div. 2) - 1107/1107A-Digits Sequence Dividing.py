from sys import stdin, stdout
input = stdin.readline
mapin = lambda : map(int, input().split())
listin = lambda : list(mapin())
for _ in range(int(input())):
    n = int(input())
    l = input()
    if int(l[0]) < int(l[1:]):
        print('YES')
        print(2)
        print(l[0], l[1:])
    else:
        print('NO')