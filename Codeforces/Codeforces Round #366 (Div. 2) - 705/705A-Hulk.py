n = int(input())
x = 'that'
for i in range(n):
 if i == n-1:
  x = 'it'
 if i%2 == 0:
  print("I hate " + x, end = ' ')
 else:
  print("I love " + x, end = ' ')
print()