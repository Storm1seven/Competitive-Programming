import math
def getval(b, c, x):
    return (x**2 + b*x + c)/math.sin(x)
def getdir(b, c, mid):
    if getval(b, c, mid-0.000001) < getval(b, c, mid):
        return 'left'
    return 'right'
def binary_search(hi, lo, b, c):
    for _ in xrange(50):
        mid = lo + (hi-lo)/2
        if getdir(b, c, mid) == 'right':
            hi = mid
        else:
            lo = mid
    return lo
pi = 3.1415926535897932384626433
for b in range(1, 21):
    for c in range(1, 21):
        print(b, c, getval(b, c, binary_search(0.00001, pi/2, b, c)))