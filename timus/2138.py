def solve(n):
    res = []
    while n:
        res.append(n%256)
        n//=256
    while len(res) < 4:
        res.append(0)
    ans = 0
    for i in range(len(res)):
        ans+=res[i]*256**(len(res)-i-1)
    return ans
s = input()
n = int(input())
print(solve(n))