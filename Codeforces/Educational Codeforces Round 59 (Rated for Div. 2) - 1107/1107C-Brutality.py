import itertools
n, k = map(int, input().split())
a = list(map(int, input().split()))
s = input()
z = itertools.groupby(s)
z = [(i, sum(1 for t in j)) for i, j in z]
count = 0
ans = 0
for i, j in z:
    if j < k:
        ans+=sum(a[count:count+j])
    else:
        ans+=sum(sorted(a[count:count+j])[-k:])
    count+=j
print(ans)