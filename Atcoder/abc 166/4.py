x = int(input())
lim = int(x**(1/5))+1

for a in range(10**6):
    mul = 1
    if a**5 < x:
        mul = -1
    
    b = ((a**5 - x)*mul)**(1/5)
    b*=mul
    b = int(b)
    if a**5 - b**5 == x:
        print(a, b)
        exit()