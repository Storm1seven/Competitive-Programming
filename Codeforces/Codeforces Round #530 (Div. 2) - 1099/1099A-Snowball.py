w, h = map(int, input().split())
u1, d1 = map(int, input().split())
u2, d2 = map(int, input().split())
while h:
 w+=h
 if h == d1:
  w-=u1
  if w <0:
   w = 0
 if h == d2:
  w-=u2
  if w < 0:
   w =0
 h-=1
if w <= 0:
 print(0)
else:
 print(w)