import math
h, w, n = map(int, input().split())
count = 0
length = 0
for _ in range(n):
    s = input()
    if not length:
        length+=len(s)
    elif length+1+len(s) <= w:
        length+=(1+len(s))
    else:
        count+=1
        length = len(s)
if length:
    count+=1
print(math.ceil(count/h))