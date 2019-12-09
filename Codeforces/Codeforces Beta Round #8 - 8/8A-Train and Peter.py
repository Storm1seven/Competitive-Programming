import re
z = input()
a = input()
b = input()
regex = re.compile(a+r'.*'+b)
if (bool(regex.search(z))) and (bool(regex.search(z[::-1]))):
 print('both')
elif (bool(regex.search(z))):
 print('forward')
elif (bool(regex.search(z[::-1]))):
 print('backward')
else:
 print('fantasy')