a = input()
a = a.lower()
z = list(a.strip())
for i in range(len(z)):
 if a[i] in 'aeiouy':
  z.remove(a[i])
  i-=1
print('.', end ='')
print('.'.join(z))