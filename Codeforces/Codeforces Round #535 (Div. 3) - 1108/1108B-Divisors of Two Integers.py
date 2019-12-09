import math
def factors(n):
    s = set([]) 
    i = 1
    while i <= math.sqrt(n): 
        if (n % i == 0) :  
            if (n / i == i) : 
                s.add(i) 
            else :  
                s.add(i)
                s.add(n//i) 
        i = i + 1
    return s
n = int(input())
a = list(map(int, input().split()))
num1 = max(a)
fac = factors(num1)
m = 0
d = set([])
for i in a:
    if a.count(i) >= 2:
        d.add(i)
    elif num1%i!=0:
        d.add(i)
print(num1, max(list(d)))