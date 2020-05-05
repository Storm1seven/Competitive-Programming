mod = 10**9+7
def solve():
    n = int(input())
    s = input()
    count = 0
    for l in range(n):
        curr = 0
        ccount = 0
        i = l
        while i < n:
            if s[i] == '(':
                curr+=1
            elif s[i] == ')':
                curr-=1
            if curr < 0:
                curr+=2
                ccount+=1
                ccount%=mod
            count+=ccount
            count%=mod
            i+=1
    total = (n*(n+1))//2
    print((count*pow(total, mod-2, mod))%mod)
for _ in range(int(input())):
    solve()