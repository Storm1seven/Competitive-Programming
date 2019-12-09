import math
n, r = map(int, input().split())
x = (n-2)/(2*n) 
x*=3.14159265359
if n == 6:
    print(r)
    exit()
print(r*math.cos(x)/(1 - math.cos(x)))