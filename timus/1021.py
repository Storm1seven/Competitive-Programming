n = int(input())
s = set()
for i in range(n):
    s.add(int(input()))
m = int(input())
t = set()
for i in range(m):
    t.add(int(input()))
for i in s:
    if 10000-i in t:
        print("YES")
        exit()
print("NO")