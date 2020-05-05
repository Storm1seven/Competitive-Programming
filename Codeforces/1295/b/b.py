import math, collections, sys
# input = sys.stdin.readline
for _ in range(int(input())):
    n, x = map(int, input().split())
    s = input()
    val = []
    for i in s:
        if not val:
            if i == '1':
                val.append(-1)
            else:
                val.append(1)
        else:
            if i == '1':
                val.append(val[-1]-1)
            else:
                val.append(val[-1]+1)
    inc = val[-1]
    if inc == 0:
        if x in val:
            print(-1)
        else:
            if x == 0:
                print(1)
            else:
                print(0)
    else:
        count = 0
        for i in val:
            if (x-i)/inc == int((x-i)//inc) and (x-i)/inc >= 0:
                count+=1
        if x == 0:
            count+=1
        print(count)