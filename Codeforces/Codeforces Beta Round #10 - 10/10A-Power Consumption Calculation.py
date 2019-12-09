n, p1, p2, p3, t1, t2 = map(int, input().split())
consump = 0
z = []
k = []
for _ in range(n):
 z+=list(map(int, input().split()))
for i in range(1, len(z)):
 k.append(z[i] - z[i-1])
for i in range(0, len(k), 2):
 consump+= p1*k[i]
k = k[1::2]
for i in k:
 t = i
 consump+= min(t, t1)*p1
 consump+=min(max(0, t-t1), t2)*p2
 consump+=max(0, t -t1 -t2)*p3
print(consump)
     