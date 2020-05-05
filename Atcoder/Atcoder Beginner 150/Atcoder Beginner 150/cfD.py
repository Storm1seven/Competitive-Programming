a = [0, 1, 3]
z = []
xor = 0
for i in a:
    z.append(bin(i)[2:])
    xor^=i
print(xor)
ans = 10**20
x = 0
possible = []
for i in range(2**20):
    lans = 0
    for j in a:
        lans = max(lans, j^i)
    if lans < ans:
        ans = lans
        x = i
        possible = [i]
    elif lans == ans:
        possible.append(i)
print(z)
print(possible)
print(bin(ans))
print(ans, x)