n = int(input())
a = list(map(int, input().split()))
s = sum(a)
ans = 10**15
for i in range(2**n):
    b = bin(i)[2:].zfill(n)
    val = 0
    for j in range(n):
        if b[j] == '1':
            val+=a[j]
    ans = min(ans, abs(s-2*val))
print(ans)