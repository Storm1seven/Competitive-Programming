from collections import defaultdict
d = defaultdict(int)
for _ in range(int(input())):
    d[input()]+=1
z = []
for i in d.items():
    z.append([i[1], i[0]])
z.sort()
print(z[-1][1])