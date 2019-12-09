n = int(input())
s = input()
t = input()
choice = ['abcabc', 'acbacb', 'bacbac', 'bcabca', 'cabcab', 'cbacba']+['abc', 'acb', 'bac', 'bca', 'cab', 'cba']
print("YES")
for i in choice:
    if s not in i and t not in i:
        if s[0] == s[1] or t[0] == t[1]:
            print(i[:3]*n)
            break
        else:
            print(i[0]*n + i[1]*n + i[2]*n)
            break