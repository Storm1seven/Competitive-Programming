from sys import stdin, stdout
I=lambda:stdin.readline()
n,m=map(int,I().split())
a=[0]*m
s = 0
for i in range(1,m+1):
 a[i*i%m]+=(n-i)//m+1
for i in range(m):
 s+=a[i]*a[-i]
stdout.write(str(s)+'\n')