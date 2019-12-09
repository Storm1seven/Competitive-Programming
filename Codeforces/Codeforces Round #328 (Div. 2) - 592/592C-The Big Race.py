import math
from collections import deque, defaultdict
from sys import stdin, stdout
input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
def lcm(a, b):
    return (a*b)//math.gcd(a, b)
t, w, b = mapin()
m = lcm(w, b)
count = min(w-1, b-1)
p = ((t//m)*m)//m * (count+1)
p+=min(t%m, count)
q = t
z = math.gcd(p, q)
p//=z
q//=z
print(p, end = "/")
print(q)