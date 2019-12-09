n = int(input())
x = list(map(int, input().split()))
y = list(map(int, input().split()))
x = x[1:]
y = y[1:]
z = x+y
z = list(set(z))
if z == list(range(1, n+1)):
 print('I become the guy.')
else:
 print('Oh, my keyboard!')