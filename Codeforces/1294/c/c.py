import math
import collections
import sys
import math
def primeFactors(n):
    l = []
    count = 0
    while n % 2 == 0:
        count+=1
        n = n // 2
    if count > 0:
        l.append([2, count])
        count = 0
    for i in range(3, int(math.sqrt(n))+1, 2): 
        while n % i == 0:
            count+=1
            n = n // i
        if count > 0:
            l.append([i, count])
            count = 0
    if n > 2:
        l.append([n, 1])
    return l
input = sys.stdin.readline
for _ in range(int(input())):
    n = int(input())
    l = primeFactors(n)
    if len(l) >= 3:
        print("YES")
        m1, m2, m3 = 1, 1, 1
        m1 = l[0][0]**l[0][1]
        m2 = l[1][0]**l[1][1]
        for i in range(2, len(l)):
            m3*=l[i][0]**l[i][1]
        print(m1, m2, m3)
    else:
        if len(l) == 1:
            if l[0][1] >= 6:
                print("YES")
                print(l[0][0]**1, l[0][0]**2, l[0][0]**(l[0][1]-3))
            else:
                print("NO")
        else:
            if l[0][1] + l[1][1] >= 4:
                print("YES")
                print(l[0][0], l[1][0], (l[0][0]**(l[0][1]-1))*(l[1][0]**(l[1][1]-1)))
            else:
                print("NO")