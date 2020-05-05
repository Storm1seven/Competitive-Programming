n = int(input())
n = bin(n)[2:].zfill(6)
ans = ""
ans+=n[0]
ans+=n[5]
ans+=n[3]
ans+=n[2]
ans+=n[4]
ans+=n[1]
print(int(ans, 2))