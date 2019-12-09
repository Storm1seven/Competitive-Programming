n = int(input())
a = list(map(int, input().split()))
z = []
for i in a:
 if a.count(i)%2 == 1:
  z.append(i)
z.sort()
ans = 0
z.reverse()
for i in range(len(z)-1):
 if i%2 == 0:
  ans+= z[i] - z[i+1]
print(ans)