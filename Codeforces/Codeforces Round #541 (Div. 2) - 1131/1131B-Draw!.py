x=y=0
ans=1
for _ in range (int(input())):
    a,b=map(int,input().split())
    ans+=max(0,min(a,b)-max(x,y)+(x!=y))
    x,y=a,b
print(ans)