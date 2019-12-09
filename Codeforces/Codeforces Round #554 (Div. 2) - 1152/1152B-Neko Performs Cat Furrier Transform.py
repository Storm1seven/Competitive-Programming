import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
def findzero(n):
    s = bin(n)[2:]
    for i in range(len(s)):
        if s[i] == '0':
            return len(s) - i
n = int(input())
ans = []
count = 0
while('0' in bin(n)[2:]):
    if count%2 == 0:
        k = findzero(n)
        num = 2**k - 1
        ans.append(k)
        n^=num
        count+=1
    else:
        n+=1
        count+=1
if count:
    print(count)
    print(*ans)
else:
    print(count)