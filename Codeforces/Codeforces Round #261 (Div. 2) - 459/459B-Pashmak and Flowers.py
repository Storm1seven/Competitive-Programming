n = int(input())
a = list(map(int, input().split()))
mi = min(a)
ma = max(a)
if mi == ma:
    print(0, end = ' ')
    print((a.count(mi)*(a.count(mi)-1))//2)
else:
    print(ma - mi, end = ' ')
    print(a.count(mi)*a.count(ma))