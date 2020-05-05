import math, collections, sys
# input = sys.stdin.readline
s = input()
o = collections.deque([])
c = collections.deque([])
for i in range(len(s)):
    if s[i] == '(':
        o.append(i+1)
    else:
        c.append(i+1)
ans = []
while o and c:
    if o[0] < c[-1]:
        ans.append(o.popleft())
        ans.append(c.pop())
    else:
        break
ans.sort()
if len(ans):
    print(1)
    print(len(ans))
    print(*ans)
else:
    print(0)