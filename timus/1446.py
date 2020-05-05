from collections import defaultdict
n = int(input())
d = defaultdict(list)
for i in range(n):
    x = input()
    y = input()
    d[y].append(x)
houses = ["Slytherin", "Hufflepuff", "Gryffindor", "Ravenclaw"]
for i in houses:
    print(i+":")
    for j in d[i]:
        print(j)
    print()