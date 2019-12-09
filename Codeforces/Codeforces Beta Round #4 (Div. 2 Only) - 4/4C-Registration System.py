from collections import defaultdict
n = int(input())
z = defaultdict(int)
for _ in range(n):
 name = input()
 if name not in z:
  z[name] = 1
  print('OK')
 else:
  print(name+str(z[name]))
  z[name]+=1