import sys,math,string,bisect
input=sys.stdin.readline
from collections import deque,defaultdict
L=lambda : list(map(int,input().split()))
Ls=lambda : list(input().split())
M=lambda : map(int,input().split())
I=lambda :int(input())
file1=open("input.txt","r")
W=file1.readlines()
n,m=map(int,W[0].split())
l=list(map(int,W[1].split()))
file1.close()
d=[]
for i in range(n):
    d.append((l[i],i+1))
d.sort(reverse=True,key=lambda x:x[0])
s=d[:m]
min=s[-1][0]
 s.sort(key=lambda x:x[1])
ans=""
for i in range(m):
    ans+=str(s[i][1])+" "
file2=open("output.txt","w")
file2.write(str(min)+'\n')
file2.write(ans)
file2.close()