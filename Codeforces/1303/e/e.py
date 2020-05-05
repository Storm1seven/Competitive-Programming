from collections import defaultdict, deque
import bisect
#input = sys.stdin.readline
def case():
    s = input()
    t = input()
    d = defaultdict(list)
    for i in range(len(s)):
        d[s[i]].append(i)
    for i in t:
        if not len(d[i]):
            print("NO")
            return
    count = 0
    i = 0
    prev = -1
    while i < len(t):
        if not d[t[i]]:
            print("NO")
            return
        if bisect.bisect_right(d[t[i]], prev) < len(d[t[i]]):
            prev = d[t[i]][bisect.bisect_right(d[t[i]], prev)]
            d[t[i]].remove(prev)
            i+=1
        else:
            prev = -1
            count+=1
    print(count)
    if count+1 > 2:
        print("NO")
    else:
        print("YES")
for _ in range(int(input())):
    case()
