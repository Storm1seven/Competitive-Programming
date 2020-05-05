import math, collections, sys
input = sys.stdin.readline
n = int(input())
a = list(map(int, input().split()))
# bitcount = [0 for i in range(33)]
number = [[] for i in range(33)]
for i in a:
    binary = bin(i)[2:].zfill(32)
    for j in range(32):
        if binary[j] == '1':
            number[j].append(i)
first = -1
for i in number:
    if len(i) == 1:
        first = i[0]
        break
if first == -1:
    print(*a)
    exit()
ans = []
for i in a:
    if i != first:
        ans.append(i)
ans.append(first)
ans.reverse()
print(*ans)