s = input()
ans = ""
count = 0
for i in range(len(s)):
    for j in range(i, len(s)):
        if count < s.count(s[i:j+1]):
            ans = s[i:j+1]
            count = s.count(ans)
print(ans)