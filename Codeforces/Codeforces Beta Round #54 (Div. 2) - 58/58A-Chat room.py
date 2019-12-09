import re
a = input()
helloRegex = re.compile('h.*e.*l.*l.*o')
flag = bool(helloRegex.search(a))
if flag:
 print('YES')
else:
 print('NO')