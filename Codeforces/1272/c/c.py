import math, collections, sys
#input = sys.stdin.readline
n, k = map(int, input().split())
s = input()
z = set(list(input().split()))
p = []
count = 0
for i in s:
    if i not in z:
        p.append(count)
        count = 0
    else:
        count+=1
p.append(count)
ans = 0
for i in p:
    ans+=(i*(i+1))//2
print(ans)