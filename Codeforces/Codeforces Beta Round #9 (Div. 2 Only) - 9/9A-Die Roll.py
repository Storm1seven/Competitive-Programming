y, w = map(int, input().split())
if max(y,w) == 1:
 print('1/1')
elif max(y,w) == 2:
 print('5/6')
elif max(y,w) == 3:
 print('2/3')
elif max(y,w) == 4:
 print('1/2')
elif max(y,w) == 5:
 print('1/3')
else:
 print('1/6')