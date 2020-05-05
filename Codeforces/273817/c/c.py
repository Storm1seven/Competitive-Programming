a=list(input())
b=int(input())
a.sort(reverse=True)
ans=''
while a:
    for i in range(len(a)):
        if int(ans+a[i]+''.join(sorted(a[:i]+a[i+1:]))) <= b:
            ans+=a[i]
            a=a[:i]+a[i+1:]
            break
print(ans)