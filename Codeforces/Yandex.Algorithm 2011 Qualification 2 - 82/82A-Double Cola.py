n=int(input())
a=["Sheldon", "Leonard", "Penny", "Rajesh", "Howard"]
i=-1
while n>0:
    i+=1
    n-=5*2**i
n+=5*2**i-1
print(a[n//2**i])