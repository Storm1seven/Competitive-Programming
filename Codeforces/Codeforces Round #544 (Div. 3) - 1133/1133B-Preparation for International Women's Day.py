from collections import defaultdict
n, k = map(int, input().split())
a = list(map(int, input().split()))
d = defaultdict(int)
for i in a:
    d[i%k]+=1
ans = 0
for i in range(1, k//2 + 1):
    if i == k-i:
        ans+=d[i]//2 * 2
    else:
        ans+=min(d[i], d[k-i])*2
ans+=d[0]//2 * 2
print(ans)