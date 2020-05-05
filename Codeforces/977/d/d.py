import math, collections, sys
input = sys.stdin.readline
n = int(input())
a = list(map(int, input().split()))
d = collections.defaultdict(int)
ans = []
for i in a:
    d[i]+=1
for i in a:
    if i%3 == 0 and d[i//3] == 0 and d[i*2] == 0:
        ans.append(i)
        break
while len(ans) != n:
    if d[ans[-1]*3]:
        d[ans[-1]*3]-=1
        ans.append(ans[-1]*3)
    elif ans[-1]%2 == 0 and d[ans[-1]//2]:
        d[ans[-1]//2]-=1
        ans.append(ans[-1]//2)
print(*ans[::-1])