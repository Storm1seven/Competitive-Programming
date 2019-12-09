t = int(input())
count = 0
for _ in range(t):
 if '+' in input():
  count+=1
 else:
  count-=1
print(count)