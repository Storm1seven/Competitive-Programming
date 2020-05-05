from collections import deque
import sys
input = sys.stdin.readline    
for _ in range(int(input())):
    n, m, k = map(int, input().split())
    k = min(m-1, k)
    a = list(map(int, input().split()))
    ans = 0
    for i in range(k+1):
        ans1 = 10**10
        for j in range(m-k):
            ans1 = min(ans1, max(a[i+j], a[i+j+n-m]))
        ans = max(ans, ans1)
    print(ans)