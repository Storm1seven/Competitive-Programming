from collections import defaultdict
d = defaultdict(int)
for _ in range(int(input())):
    d[input()]+=1
ans = 0
for i in d.items():
    ans+=i[1]//4
print(ans)