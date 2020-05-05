from sys import stdin
input = stdin.readline
n = int(input())
s = set()
for _ in range(n):
    s.add(int(input()))
count = 0
for i in range(int(input())):
    if int(input()) in s:
        count+=1
print(count)