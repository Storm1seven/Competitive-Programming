from collections import defaultdict
# input = sys.stdin.readline
def case():
    n = int(input())
    s = input()
    s = [i for i in s]
    t = input()
    t = [i for i in t]
    d= defaultdict(int)
    for i in s:
        d[i]+=1
    for i in t:
        d[i]+=1
    for i in d.values():
        if i%2:
            print("NO")
            return
    ans = []
    for i in range(n):
        flag = 0
        for j in range(i+1, n):
            if s[i] == s[j]:
                t[i], s[j] = s[j], t[i]
                ans.append([j+1, i+1])
                flag = 1
                break
        if flag:
            continue
        for j in range(i+1, n):
            if s[i] == t[j]:
                s[j], t[j] = t[j], s[j]
                ans.append([j+1, j+1])
                t[i], s[j] = s[j], t[i]
                ans.append([j+1, i+1])
                flag = 1
                break
        if flag:
            continue
    print("YES")
    print(len(ans))
    for i in ans:
        print(*i)
for _ in range(int(input())):
    case()