n = int(input())
k = int(input())
zero = [0 for i in range(n)]
nZero = [0 for i in range(n)]
nZero[0] = k-1
for i in range(1, n):
    nZero[i] = (k-1)*(nZero[i-1]+zero[i-1])
    zero[i] = nZero[i-1];
print(zero[n-1]+nZero[n-1])