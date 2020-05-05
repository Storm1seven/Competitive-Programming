import math 
n, m = map(int, input().split())
a = list(map(int, input().split()))
z = a[0]
for i in a:
    z = math.gcd(z, i)
for i in range(n):
    a[i]//=z
lcm = 1
x = set(a)
for i in x:
    lcm*=i
lcm*=z
print(((m//lcm-max(a)//lcm)))