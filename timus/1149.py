a = ["sin(1"]
n = int(input())
for i in range(n-1):
    if i%2:
        a.append(a[-1]+"+"+"sin("+str(i+2))
    else:
        a.append(a[-1]+"-"+"sin("+str(i+2))
for i in range(n):
    a[i]+=(i+1)*")"
ans = "("*(n-1)
for i in range(n):
    ans+=a[i]+"+"+str(n-i)
    ans+=")"
print(ans[:-1])