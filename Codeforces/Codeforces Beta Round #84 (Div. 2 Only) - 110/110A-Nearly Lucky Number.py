n = input()
count = 0
for i in n:
 if i != '4' and i !='7':
  count+=1
count = len(n) - count
if count == 4 or count == 7:
 print('YES')
else:
 print('NO')