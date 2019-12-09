n = int(input())
a = list(map(int, input().split()))
b = [i for i in range(2, 100)]
c = []
for i in b:
 co = 0
 for j in a:
  if j > i+1:
   co+=j - i - 1
  elif j < i - 1:
   co+=i - 1 - j
 c.append(co)
print(b[c.index(min(c))], min(c))