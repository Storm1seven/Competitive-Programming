import math
def isPower(n) : 
    if (n==1)  : 
        return True
    for x in range(2,(int)(math.sqrt(n))+1) : 
        y = 2
        p = (int)(math.pow(x, y)) 
        while (p<=n and p>0) : 
            if (p==n) : 
                return True
            y = y + 1
            p = math.pow(x, y) 
    return False
f = [0 for i in range(101)]
for i in range(1, 101):
    for j in range(1, i+1):
        if i%j == 0 and isPower(j):
            f[i]+=j
for i in range(1, 101):
    print(i, sum(f[:i+1]))