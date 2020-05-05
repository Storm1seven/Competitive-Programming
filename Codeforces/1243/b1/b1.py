import math, collections, sys
# input = sys.stdin.readline
def case():
    n = int(input())
    s = input()
    t = input()
    mismatch = []
    for i in range(n):
        if s[i]!=t[i]:
            mismatch.append(i)
    if len(mismatch) == 2:
        if s[mismatch[0]] == s[mismatch[1]] and t[mismatch[0]] == t[mismatch[1]]:
            print("YES")
            return
    print("NO")
for _ in range(int(input())):
    case()