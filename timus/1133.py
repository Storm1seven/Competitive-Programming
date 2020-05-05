i, fi, j, fj, n = map(int, input().split())
if i > j:
    i, j = j, i
    fi, fj = fj, fi
fip = [0, 1]
f  = [1, 0]
for k in range(2005):
    fip.append(fip[-1]+fip[-2])
    f.append(f[-1]+f[-2])
i+=1000
j+=1000
n+=1000
ans = [0 for i in range(2007)]
ans[i] = fi
ans[j] = fj
if j-i > 1:
    ans[i+1] = (ans[j]-ans[i]*f[j-i])//fip[j-i]
if n > i:
    for k in range(i+2, n+1):
        ans[k] = ans[k-1]+ans[k-2]
else:
    for k in range(i-1, n-1, -1):
        ans[k] = ans[k+2]-ans[k+1]
print(ans[n])