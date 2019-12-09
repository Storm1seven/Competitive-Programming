s = input()
k = len(s)
start = k//2 - int((k+1)%2)
print(s[start], end = '')
for i in range(1, k//2 + 1):
 print(s[start+i], end = '')
 if start - i >=0:
  print(s[start - i], end = '')
print()