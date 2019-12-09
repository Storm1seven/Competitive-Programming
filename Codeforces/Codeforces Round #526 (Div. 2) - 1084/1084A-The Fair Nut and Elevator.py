n = int(input())
a = list(map(int, input().split()))
x = [0]*n
for i in range(n):
 for j in range(len(a)):
  x[i]+=2*a[j]*(abs(i-j) + j + i)
print(min(x))