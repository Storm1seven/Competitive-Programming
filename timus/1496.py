from collections import defaultdict
d = defaultdict(int)
for _ in range(int(input())):
    d[input()]+=1
for i in d.items():
    if i[1] >= 2:
        print(i[0])