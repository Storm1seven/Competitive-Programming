def CeilIndex(A, l, r, key):
    while (r - l > 1):
        m = l + (r - l)//2
        if (A[m] > key):
            r = m
        else:
            l = m
    return r

def LongestIncreasingSubsequenceLength(A, size):
    tailTable = [0 for i in range(size + 1)]
    len = 0
    tailTable[0] = A[0]
    len = 1
    for i in range(1, size):
        if (A[i] < tailTable[0]):
            tailTable[0] = A[i]
        elif (A[i] > tailTable[len-1]):
            tailTable[len] = A[i]
            len += 1
        else:
            tailTable[CeilIndex(tailTable, -1, len-1, A[i])] = A[i]
    return len

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a2 = a+a
    val1 = LongestIncreasingSubsequenceLength(a, n)
    val2 = LongestIncreasingSubsequenceLength(a2, 2*n)
    if val1 >= val2:
        print(1)
    else:
        print(2)