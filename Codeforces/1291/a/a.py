import math, collections, sys
input = sys.stdin.readline
for _ in range(int(input())):
    n = int(input())
    s = input()
    s = [i for i in s]
    ans = ''
    odd = '13579'
    for i in s:
        if i in odd:
            ans+=i
    if len(ans) == 1 or len(ans) == 0:
        print(-1)
    else:
        if len(ans)%2:
            print(ans[1:])
        else:
            print(ans)