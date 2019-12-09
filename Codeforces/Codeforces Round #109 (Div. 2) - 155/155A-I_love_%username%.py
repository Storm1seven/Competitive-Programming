n = int(input())
a = list(map(int, input().split()))
x = a[0]
y = a[0]
count = 0
for i in a:
 if i > x:
  x = i
  count+=1
 if i < y:
  y = i
  count+=1
print(count)