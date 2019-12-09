n = int(input())
s1 = ""
s2 = ""
for i in range(n):
    if i%2:
        s1+="W"
        s2+="B"
    else:
        s1+="B"
        s2+="W"
for i in range(n):
    if i%2:
        print(s1)
    else:
        print(s2)