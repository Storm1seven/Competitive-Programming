from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
def factors(n):
 a = set([])
 for i in range(1, int(n**0.5) + 1):
  if n%i == 0:
   a.add(i)
   a.add(n//i)
 a = list(a)
 a.sort()
 return a 
n, k = mapin()
z = factors(n)
x = []
for i in z:
 temp=(i*k)+(n//i)
 if temp%k!=0:
     x.append(temp)
for i in x:
    if (i//k)*(i%k)==n:
        print(str(i))
        break