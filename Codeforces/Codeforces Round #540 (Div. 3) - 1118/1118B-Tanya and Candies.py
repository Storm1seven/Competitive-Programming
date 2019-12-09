n = int(input())
a = list(map(int, input().split()))
s = sum(a[1::2])
t = sum(a[::2])
s1, t1, count = 0, 0, 0
for i in range(n):
    if i%2:
        s-=a[i]
    else:
        t-=a[i]
    if s+t1 == t+s1:
        count+=1
    if i%2:
        s1+=a[i]
    else:
        t1+=a[i]
print(count)