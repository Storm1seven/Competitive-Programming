from sys import stdin
z = stdin.readlines()
ans = ""
flag = 1
for i in z:
    for j in i:
        if j.isupper():
            if flag:
                flag = 0
                ans+=j
                continue
            ans+=j.lower()
        else:
            if j == '.' or j == '!' or j == '?':
                flag = 1
            ans+=j
print(ans)