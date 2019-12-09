a = input()
if a.isupper():
 print(a.lower())
elif len(a)==1:
 print(a.upper())
elif a[:1].islower() and a[1:].isupper():
 print(a[:1].upper()+a[1:].lower())
else:
 print(a)