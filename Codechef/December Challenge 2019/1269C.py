n, k = map(int, input().split())
s = [int(i) for i in input()]
t = [i for i in s]
for i in range(k, n):
    t[i] = t[i-k]
if ''.join(map(str, t)) >= ''.join(map(str, s)):
    print(len(t))
    print(''.join(map(str, t)))
    exit()
for i in range(k-1, -1, -1):
    if t[i] != 9:
        for j in range(i, n, k):
            t[j]+=1
        break
    else:
        for j in range(i, n, k):
            t[j] = 0
print(len(t))
print(''.join(map(str, t)))