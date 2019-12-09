a = []
for _ in range(4):
    a.append(int(input()))
if a[3] == a[0] and (a[0] > 0 or a[2] == 0):
    print('1')
else:
    print('0')