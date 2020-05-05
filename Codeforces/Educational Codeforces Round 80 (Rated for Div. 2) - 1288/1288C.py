mod = [10**9+7]
def fact(n):
    ans = 1
    for i in range(1, n+1):
        ans*=i
        ans%=mod[0]
    return ans
n, m = map(int, input().split())
val = fact(n+2*m-1)
val*=pow(fact(n-1), mod[0]-2, mod[0])
val%=mod[0]
val*=pow(fact(2*m), mod[0]-2, mod[0])
val%=mod[0]
print(val)