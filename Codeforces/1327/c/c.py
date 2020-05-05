import math, collections, sys
input = sys.stdin.readline
n, m, k = map(int, input().split())
for i in range(2*k):
    x, y = map(int, input().split())
ans = ""
for i in range(m-1):
    ans+='L'
for i in range(n-1):
    ans+="U"
for i in range(n):
    if i%2:
        ans+="L"*(m-1)
    else:
        ans+="R"*(m-1)
    if i != n-1:
        ans+='D'
print(len(ans))
print(ans)