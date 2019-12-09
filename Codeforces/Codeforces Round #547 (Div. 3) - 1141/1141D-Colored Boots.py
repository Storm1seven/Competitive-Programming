from collections import defaultdict
n = int(input())
l = input()
r = input()
ld = defaultdict(list)
rd = defaultdict(list)
for i in range(n):
    ld[l[i]].append(i+1)
for i in range(n):
    rd[r[i]].append(i+1)
s = 'abcdefghijklmnopqrstuvwxyz'
ans = []
for i in s:
    while ld[i] and rd[i]:
        ans.append((ld[i].pop(), rd[i].pop()))
for i in s:
    while ld['?'] and rd[i]:
        ans.append((ld['?'].pop(), rd[i].pop()))
for i in s:
    while rd['?'] and ld[i]:
        ans.append((ld[i].pop(), rd['?'].pop()))
while rd['?'] and ld['?']:
    ans.append((ld['?'].pop(), rd['?'].pop()))
print(len(ans))
for i in ans:
    print(*i)