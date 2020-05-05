def fact(n):
    if n == 0:
        return 1
    return n*fact(n-1)
def npr(n, r):
    return fact(n)//fact(n-r)
n = int(input())
ans = 0
for i in range(2, n+1): 
    ans+=npr(n, i)
print(ans)