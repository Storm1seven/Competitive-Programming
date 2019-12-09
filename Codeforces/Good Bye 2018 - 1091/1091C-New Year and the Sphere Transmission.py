def factors(n):
 a = set([])
 for i in range(1, int(n**0.5)+1):
  if n%i == 0:
   a.add(i)
   a.add(n//i)
 a = list(a)
 a.sort()
 return a
n = int(input())
z = factors(n)
p = []
for i in z:
 nt = n//i
 p.append((nt * (2 + n - i))//2 )
p.sort()
print(*p)