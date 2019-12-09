from sys import stdin, stdout
input = stdin.readline
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
b, k = mapin()
a = listin()
if b%2 == 0:
    if a[-1]%2 == 0:
        print('even')
    else:
        print('odd')
else:
    count = 0
    for i in a:
        if i%2 == 1:
            count+=1
    if count%2==1:
        print('odd')
    else:
        print('even')