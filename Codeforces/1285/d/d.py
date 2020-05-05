import math, collections, sys
input = sys.stdin.readline
def solve(a, bit):
    if len(a) == 0 or bit < 0:
        return 0
    one = []
    zero = []
    for i in a:
        if (i>>bit)&1:
            one.append(i)
        else:
            zero.append(i)
    if not one:
        return solve(zero, bit-1)
    if not zero:
        return (solve(one, bit-1))
    return min(solve(one, bit-1), solve(zero, bit-1))+(1<<bit)
n = int(input())
z = list(map(int, input().split()))
print(solve(z, 30))