from collections import defaultdict
n, k = map(int, input().split())
d = defaultdict(int)
for i in range(k):
    x = int(input())
    a = list(map(int, input().split()))
    for j in a:
        d[j]+=1
count = 0
for i in range(1, n+1):
    if not d[i]:
        count+=1
print(count)