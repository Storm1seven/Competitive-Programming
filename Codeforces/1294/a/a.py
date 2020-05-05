import math, collections, sys
input = sys.stdin.readline
for _ in range(int(input())):
    a, b, c, n = map(int, input().split())
    if (a+b+c+n)%3 == 0:
        final = (a+b+c+n)//3
        if final >= a and final >= b and final >= c:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")