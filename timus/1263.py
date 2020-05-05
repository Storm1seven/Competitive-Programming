from collections import defaultdict
n, m = map(int, input().split())
d = defaultdict(int)
for i in range(1, n+1):
    d[i] = 0
for i in range(m):
    d[int(input())]+=1
z = [[i[0], i[1]] for i in d.items()]
z.sort()
for i in z:
    ans =  '{:0.2f}'.format(i[1]*100/m)
    print(ans+'%')