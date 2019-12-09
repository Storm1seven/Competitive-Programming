from sys import stdin, stdout
input = stdin.readline
mapin = lambda : map(int, input().split())
for _ in range(int(input())):
    k, x = mapin()
    print(x+(k-1)*9)