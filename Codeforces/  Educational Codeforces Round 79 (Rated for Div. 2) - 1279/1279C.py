from collections import defaultdict
def case():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    index = defaultdict(int)
    for i in range(n):
        index[a[i]] = i
    depth = -1
    time = 0
    for i in range(m):
        if index[b[i]] > depth:
            time+=2*(index[b[i]]-i)+1
            depth = index[b[i]]
        else:
            time+=1
    print(time)
for _ in range(int(input())):
    case()