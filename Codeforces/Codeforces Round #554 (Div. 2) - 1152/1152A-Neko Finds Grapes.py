import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n, m = mapin()
a = listin()
b = listin()
odd_a, odd_b = 0, 0
even_a, even_b = 0, 0
for i in a:
    if i%2:
        odd_a+=1
    else:
        even_a+=1
for i in b:
    if i%2:
        odd_b+=1
    else:
        even_b+=1
print(min(odd_a, even_b)+min(even_a, odd_b))