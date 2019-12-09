import collections
import math
import sys
def isPowerOfTwo (x): 
    return (x and (not(x & (x - 1))))
def primefactors(n):
 d = collections.defaultdict(int) 
 while n%2 == 0:
  d[2]+=1
  n/=2
 for i in range(3, int(n**0.5)+1, 2):
  while n%i==0:
   d[i]+=1
   n/=i
 if n > 2:
  d[n]+=1
 return d
n = int(input())
if n == 1:
 print(1, 0)
 sys.exit()
x = primefactors(n)
y = max(x.values())
z = x.keys()
k = 1
for i in z:
 k*=i
if y == 1:
 print(int(k), 0)
elif isPowerOfTwo(y):
 if len(set(x.values())) == 1:
  print(int(k), int(math.log2(y)))
 else:
  print(int(k), int(math.log2(y)+1))
else:
 print(int(k), math.ceil(math.log2(y))+1)