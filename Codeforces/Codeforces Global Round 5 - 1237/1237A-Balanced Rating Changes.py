import math
n = int(input())
oc = 0
s = 0
for i in range(n):
    x = int(input())
    if x%2:
        if oc%2:
            print(math.ceil(x/2))
        else:
            print(math.floor(x/2))
        oc+=1
    else:
        print(x//2)