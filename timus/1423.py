from sys import stdin
input = stdin.readline
n = int(input())
s = input().strip()
t = input().strip()
t+=t
try:
    print(t.index(s))
except ValueError:
    print(-1)