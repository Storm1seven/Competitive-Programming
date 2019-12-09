import copy
n = int(input())
k = int(input())
z = [k, -k]
for _ in range(n-1):
 t = copy.deepcopy(z)
 k = int(input())
 for i in range(len(z)):
  z[i]+=k
  t[i]-=k
 z = z+t
for i in z:
 if i%360 == 0:
  print('YES')
  exit()
print('NO')