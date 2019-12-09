k, n, w = map(int, input().split())
total = int(k*w*(w+1)/2)
if n > total:
 print(0)
else:
 print(total - n)