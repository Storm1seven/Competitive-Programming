s = input()
x = ''
for i in s:
    if i != 'a':
        x+=i
if len(x)%2:
    print(":(")
else:
    p = x[:len(x)//2]
    q = x[len(x)//2:]
    if p==q:
        if s[:s.rfind(p)]+p == s:
            print(s[:s.rfind(p)])
        else:
            print(":(")
    else:
        print(":(")