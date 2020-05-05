l, r = map(int, input().split())
s = 0
for i in range(l, r+1):
   a = l
   for j in range(l, i+1):
       a&=j
   s+=a
print(s)