from collections import deque
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    d = deque(a)
    ans = ''
    curr = n
    lrm = n+1
    while d:
        if lrm == curr+1:
            ans+='1'
        else:
            ans+='0'
        if d[-1] == curr:
            lrm = min(d.pop(), lrm)
        elif d[0] == curr:
            lrm = min(d.popleft(), lrm)
        else:
            if d[-1] > d[0]:
                lrm = min(d.pop(), lrm)
            else:
                lrm = min(d.popleft(), lrm)
        curr-=1
    print(ans[::-1])