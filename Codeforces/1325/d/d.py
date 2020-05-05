import math, collections, sys
input = sys.stdin.readline
u, v = map(int, input().split())
if u > v:
    print(-1)
    exit()
if (v-u)%2:
    print(-1)
    exit()
if v == u:
    if v == 0:
        print(0)
        exit()
    print(1)
    print(u)
    exit()
if ((v-u)//2)^u == (v-u)//2+u:
    print(2)
    print((v-u)//2, u^((v-u)//2))
else:
    print(3)
    print((v-u)//2, (v-u)//2, u)