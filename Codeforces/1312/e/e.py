import math, collections, sys
input = sys.stdin.readline
n = int(input())
a = list(map(int, input().split()))
while True:
    moves = set()
    i = 0
    while i < len(a)-1:
        if a[i] == a[i+1]:
            if i-1 >= 0:
                if a[i-1] == a[i]+1:
                    moves.add(i)
                    i+=2
                else:
                    i+=1
            elif i+2 < len(a):
                if a[i+2] == a[i]+1:
                    moves.add(i)
                    i+=2
                else:
                    i+=1
        else:
            i+=1
    if moves:
        z = []
        i = 0
        while i < len(a):
            if i in moves:
                z.append(a[i]+1)
                i+=2
            else:
                z.append(a[i])
                i+=1
        a = [i for i in z]
        continue
    moves = set()
    i = 0
    while i < len(a) -1:
        if a[i] == a[i+1]:
            moves.add(i)
            i+=2
        else:
            i+=1
    if moves:
        z = []
        i = 0
        while i < len(a):
            if i in moves:
                z.append(a[i]+1)
                i+=2
            else:
                z.append(a[i])
                i+=1
        a = [i for i in z]
        continue
    break
print(len(a))