import math
from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
q = int(input())
z = [0]*(2**25)
t = [(3, 1), (7, 1), (15, 5), (31, 1), (63, 21), (127, 1), (255, 85), (511, 73), (1023, 341), (2047, 89), (4095, 1365), (8191, 1), (16383, 5461), (32767, 4681), (65535, 21845), (131071, 1), (262143, 87381), (524287, 1), (1048575, 349525), (2097151, 299593), (4194303, 1398101), (8388607, 178481), (16777215, 5592405), (33554431, 1082401)]
for i in t:
    z[i[0]]+=i[1]
for _ in range(q):
    n = int(input())
    if z[n]:
        print(z[n])
    else:
        print(2**(math.floor(math.log2(n))+1) - 1)