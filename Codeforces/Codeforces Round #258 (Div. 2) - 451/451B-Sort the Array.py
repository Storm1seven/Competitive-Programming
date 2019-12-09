n = int(input())
a = list(map(int, input().split()))
b = [i for i in a]
b.sort()
start, end = -1, 0
for i in range(n):
    if a[i]!=b[i]:
        if start == -1:
            start = i
        end = i
if start!=-1:
    z = a[start:end+1]
    z.reverse()
    a = a[:start]+z+a[end+1:]
    if a == b:
        print('yes')
        print(str(start+1)+" "+str(end+1))
    else:
        print('no')
else:
    print("yes")
    print("1 1")