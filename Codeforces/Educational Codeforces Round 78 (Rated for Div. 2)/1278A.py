def solve(a, b):
    if len(a) > len(b):
        print("NO")
        return
    for i in range(len(b) - len(a)+1):
        if sorted(b[i:i+len(a)]) == sorted(a):
            print("YES")
            return
    print("NO")
for _ in range(int(input())):
    s = input()
    t = input()
    solve(s, t)