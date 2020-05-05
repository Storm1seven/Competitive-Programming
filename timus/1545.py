from collections import defaultdict
d = defaultdict(list)
for _ in range(int(input())):
    s = input()
    d[s[0]].append(s)
c = input()
for i in d[c]:
    print(i)