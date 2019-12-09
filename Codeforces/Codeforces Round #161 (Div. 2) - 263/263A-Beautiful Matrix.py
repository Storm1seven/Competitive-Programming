z = []
for _ in range (5):
 z.append(list(map(int, input().split())))
for i in z:
 if 1 in i:
  count = abs(2-i.index(1)) + abs(2-z.index(i))
print(count)
 