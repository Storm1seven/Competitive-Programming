import math
import collections
import sys
input = sys.stdin.readline
def check(a, start):
    count = 0
    for i in a[::-1]:
        if i == start+count:
            count+=1
        else:
            return False
    return True
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    z = []
    find = 1
    while a:
        z.append(a[-1])
        if find == a[-1]:
            if check(z, find):
                find = max(z)+1
                z = []
            else:
                print("No")
                return
        a.pop()
    if not z:
        print("Yes")
    else:
        print("No")
for _ in range(int(input())):
    solve()