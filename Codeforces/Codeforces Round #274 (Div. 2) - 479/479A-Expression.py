a = []
for _ in range(3):
 a.append(int(input()))
x = a[0]*(a[1]+a[2])
z = a[2]*(a[1]+a[0])
w = a[0]*(a[1]*a[2])
v = sum(a)
print(max(x,z,w,v))