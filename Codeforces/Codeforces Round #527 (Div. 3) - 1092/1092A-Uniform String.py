x = '1abcdefghijklmnopqrstuvwxyz'
for _ in range(int(input())):
 n, k = map(int, input().split())
 z = n//k
 ans = ''
 for i in range(1, k+1):
  ans+=x[i]*z
 t = n - len(ans)
 ans+=x[1:t+1]
 print(ans)