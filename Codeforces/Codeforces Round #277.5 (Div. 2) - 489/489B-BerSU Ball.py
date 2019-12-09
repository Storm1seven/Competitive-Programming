n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
a.sort()
b.sort()
count = 0
while len(a)!=0 and len(b)!=0:
 if a[-1] == b[-1] or a[-1] == b[-1]+1 or a[-1] == b[-1]-1:
  a.pop()
  b.pop()
  count+=1
 else:
  if a[-1] > b[-1]:
   a.pop()
  else:
   b.pop()
print(count)