from collections import defaultdict
for _ in range(int(input())):
    n = int(input())
    a = []
    for i in range(n):
        a.append(input())
    s = set([])
    count = 0
    ans = []
    for i in a:
        if i not in s:
            ans.append(i)
            s.add(i)
        else:
            count+=1
            for x in '0123456789':
                if i[:-1] + x not in s and i[:-1] + x not in a:
                    ans.append(i[:-1]+x)
                    s.add(i[:-1]+x)
                    break
    print(count)
    for i in ans:
        print(i)