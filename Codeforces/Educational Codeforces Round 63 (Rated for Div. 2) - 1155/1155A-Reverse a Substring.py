n = int(input())
s = input()
s = [i for i in s]
z = sorted(s)
if z == s:
    print("NO")
else:
    for i in range(n-1):
        if ord(s[i]) > ord(s[i+1]):
            print("YES")
            print(i+1, i+2) 
            break