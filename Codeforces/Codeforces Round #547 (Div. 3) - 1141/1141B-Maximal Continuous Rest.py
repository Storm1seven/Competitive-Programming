n = int(input())
a = list(map(int, input().split()))
a*=3
count = 0
mcount = 0
for i in range(len(a)):
    if a[i] == 1:
        count+=1
    else:
        mcount = max(count, mcount)
        count = 0
print(mcount)