from collections import defaultdict
s = input()
d = defaultdict(int)
while(1):
    s = input()
    if (s == '#'):
        break
    u, v = s.split('-')
    d[u]+=1
    d[v]+=1
print(max(len(d)-1, 0))