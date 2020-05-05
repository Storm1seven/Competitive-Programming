total = 0
def check(s, l, r, left, right):
    global total
    if l >= r:
        return True
    if s[l] == s[r]:
        return check(s, l+1, r-1, 0, 0)
    if l+1 == r:
        return False
    if not left and s[l+1] == s[r]:
        s[l], s[l+1] = s[l+1], s[l]
        total+=1
        return check(s, l+1, r-1, 1, 0)
    if not right and s[r-1] == s[l]:
        s[r], s[r-1] = s[r-1], s[r]
        total+=1
        return check(s, l+1, r-1, 0, 1)
    return False
def solve():
    global total
    n = int(input())
    s = [i for i in input()]
    total = 0
    if check(s, 0, n-1, 0, 0):
        print("YES")
        print(total)
    else:
        print("NO")
for _ in range(int(input())):
    solve()