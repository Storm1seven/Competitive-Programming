n = int(input())
a = list(map(int, input().split()))
if a[0]%2 == a[1]%2:
 for i in range(n):
  if a[i]%2 != a[0]%2:
   print(i+1)
   break
elif a[0]%2 == a[2]%2:
 print(2)
else:
 print(1)