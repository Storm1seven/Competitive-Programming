import math
from collections import deque, defaultdict
from sys import stdin, stdout
#input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
s = input()
k = ''
count = (n-11)//2
i = 0
while i < n:
    if s[i] != '8':
        k+=s[i]
    else:
        count-=1
        if count < 0:
            k+=s[i]
    i+=1
k = k[:11 + (n-11)//2]
if k.find('8')!=-1:
    if k.find('8') <= (n-11)//2:
        print("YES")
        exit()
print("NO")