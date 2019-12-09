a=list(map(int,input().split(":")))
b=list(map(int,input().split(":")))
t =(a[0]*60+b[0]*60+a[1]+b[1])//2
print(str(t//60).zfill(2)+":"+str(t%60).zfill(2))