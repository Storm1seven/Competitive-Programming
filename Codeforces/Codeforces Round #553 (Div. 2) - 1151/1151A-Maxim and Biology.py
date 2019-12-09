import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
s = input()
m = 10000
for i in range(n - 3):
    k = min(abs(ord(s[i]) - ord('A')), 26 - abs(ord(s[i]) - ord('A')))
    k+= min(abs(ord(s[i+1]) - ord('C')), 26 - abs(ord(s[i+1]) - ord('C')))
    k+= min(abs(ord(s[i+2]) - ord('T')), 26 - abs(ord(s[i+2]) - ord('T')))
    k+= min(abs(ord(s[i+3]) - ord('G')), 26 - abs(ord(s[i+3]) - ord('G')))
    m = min(m, k)
print(m)