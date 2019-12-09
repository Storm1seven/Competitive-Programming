import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
a = deque(map(int, input().split()))
z = []
length = 0
seq = ''
last = 0
while a and last < max(a[0], a[-1]):
    if min(a[0], a[-1]) > last:
        if min(a[0], a[-1]) == a[0]:
            last = a.popleft()
            seq+='L'
        else:
            last = a.pop()
            seq+='R'
    else:
        if max(a[0], a[-1]) == a[0]:
            last = a.popleft()
            seq+='L'
        else:
            last = a.pop()
            seq+='R'
    length+=1
print(length)
print(seq)