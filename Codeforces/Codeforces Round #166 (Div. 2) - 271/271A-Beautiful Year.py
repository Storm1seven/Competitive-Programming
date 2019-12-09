n = int(input()) + 1
while True:
 a = list(map(int, str(n).strip()))
 z = list(set(a))
 if len(a) == len(z):
  print(n)
  break
 n+=1