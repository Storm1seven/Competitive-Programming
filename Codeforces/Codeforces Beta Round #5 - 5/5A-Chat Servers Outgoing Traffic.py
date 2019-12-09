from sys import stdin
p = 0
load = 0
while True:
    s = stdin.readline().strip()
    if len(s) <= 1:
     break
    if s[0] == '+':
     p+=1
    elif s[0] == '-':
     p-=1
    else:
     load+=len(s.split(':')[1])*p
print(load)