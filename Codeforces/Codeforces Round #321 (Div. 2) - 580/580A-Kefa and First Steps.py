n = int(input())
a = list(map(int, input().split()))
maxc = 0
i = 1
count = 0
while(i < n):
 if (a[i-1]<=a[i]):
  count+=1
 else:
  count = 0 
 if count > maxc:
  maxc = count
 i+=1
print(maxc+1)