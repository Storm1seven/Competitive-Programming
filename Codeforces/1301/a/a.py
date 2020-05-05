import math, collections, sys
# input = sys.stdin.readline
def case():
    a = input()
    b = input()
    c = input()
    for i in range(len(a)):
        if a[i] == c[i] or b[i] == c[i]:
            continue
        else:
            print("NO")
            return
    print("YES")
for _ in range(int(input())):
    case()