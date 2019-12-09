n, p, k = map(int, input().split())
if p-k > 1 and p+k < n:
 print('<<', end = ' ')
 for i in range(p-k, p):
  print(i, end = ' ')
 print('('+str(p)+')', end = ' ')
 for i in range(p+1, p+k+1):
  print(i, end = ' ')
 print('>>')
elif not(p-k > 1 or p+k < n):
 for i in range(max(p-k, 1), p):
  print(i, end = ' ')
 print('('+str(p)+')', end = ' ')
 for i in range(p+1, min(p+k+1, n+1)):
  print(i, end = ' ')
elif p - k > 1:
 print('<<', end = ' ')
 for i in range(p-k, p):
  print(i, end = ' ')
 print('('+str(p)+')', end = ' ')
 for i in range(p+1, min(p+k+1, n+1)):
  print(i, end = ' ')
elif p+k < n:
 for i in range(max(p-k, 1), p):
  print(i, end = ' ')
 print('('+str(p)+')', end = ' ')
 for i in range(p+1, p+k+1):
  print(i, end = ' ')
 print('>>')