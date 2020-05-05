from collections import defaultdict
d = defaultdict(set)
d['e'] = set([])
d['i'] = set(['n'])
d['n'] = set(['e', 'i', 'o', 'p'])
d['o'] = set(['u', 'n'])
d['p'] = set(['u'])
d['t'] = set(['p', 'o', 'i'])
d['u'] = set(['t'])
for _ in range(int(input())):
    s = input()
    flag = True
    for i in range(1, len(s)):
        if s[i-1] in 'einoptu' and s[i] in d[s[i-1]]:
            continue
        flag = False
        break
    if flag:
        print("YES")
    else:
        print("NO")