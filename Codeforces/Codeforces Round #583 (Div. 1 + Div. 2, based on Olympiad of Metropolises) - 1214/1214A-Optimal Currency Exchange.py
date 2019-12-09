n = int(input())
d = int(input())
e = int(input())
dif = 10**10
i = 0
while (i*5*e <= n):
    dif = min(dif, (n-i*5*e)%d)
    i+=1
print(dif)