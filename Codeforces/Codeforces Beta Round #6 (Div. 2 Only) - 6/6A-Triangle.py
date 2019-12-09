import itertools
z = list(itertools.combinations(list(map(int, input().split())), 3))
trip = 0
degp = 0
impp = 0
for i in z:
 s = sum(i)/2
 area = s*(s-i[0])*(s-i[1])*(s-i[2])
 if area > 0:
  trip+=1
 elif area == 0:
  degp+=1
 else:
  impp+=1
if trip > 0:
 print("TRIANGLE")
elif degp > 0:
 print("SEGMENT")
else:
 print("IMPOSSIBLE")
 