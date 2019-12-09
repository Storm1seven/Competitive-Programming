a1 = int(input())
a2 = int(input())
k1 = int(input())
k2 = int(input())
n = int(input())
n1 = n
a = [(k1, a1), (k2, a2)]
a.sort()
rem = n//a[0][0]
if rem <= a[0][1]:
    ans1 = rem
else:
    ans1 = a[0][1]
    n-=a[0][0]*a[0][1]
    rem = n//a[1][0]
    ans1+=min(a[1][1], rem)
n1-=(a[0][0]-1)*a[0][1] + (a[1][0]-1)*a[1][1]
if n1 > 0:
    print(n1, end = " ")
else:
    print(0, end = " ")
print(ans1)