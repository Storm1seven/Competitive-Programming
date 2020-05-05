n = int(input())
a = list(map(int, input().split()))
a.sort()
vismax = [0 for i in range(n+2)]
vismin = [0 for i in range(n+2)]
for i in a:
    if vismax[i-1] == 0:
        vismax[i-1] = 1
    elif vismax[i] == 0:
        vismax[i] = 1
    else:
        vismax[i+1] = 1
a = list(set(a))
a.sort()
for i in a:
    if vismin[i-1] > 0:
        vismin[i-1] = 1
    elif vismin[i] > 0:
        vismin[i] = 1
    else:
        vismin[i+1] = 1
print(sum(vismin), sum(vismax))