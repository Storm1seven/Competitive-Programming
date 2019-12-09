n, k = map(int, input().split())
if n%2 == 0:
 if k > n/2:
  print(int(2*(k - n/2)))
 else:
  print(2*(k-1)+1)
# 1 3 5 7 2 4 6
else:
 if k > n//2 + 1:
  print(int(2*(k - n//2 -1)))
 else:
  print(2*(k-1)+1)