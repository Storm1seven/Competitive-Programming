from itertools import permutations


def CeilIndex(A, l, r, key):
    while (r - l > 1):
        m = l + (r - l)//2
        if (A[m] >= key):
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


s = input()
n = len(s)+1
z = [i for i in range(1, n+1)]
z = list(permutations(z))
maxp, minp = [], []
maxpl, minpl = 0, 100
for perm in z:
    flag = 1
    for i in range(n-1):
        if s[i] == '>':
            if perm[i] < perm[i+1]:
                flag = 0
        else:
            if perm[i] > perm[i+1]:
                flag = 0
    if flag:
        if LongestIncreasingSubsequenceLength(perm, len(perm)) > maxpl:
            maxp = [perm]
            maxpl = LongestIncreasingSubsequenceLength(perm, len(perm))
        elif LongestIncreasingSubsequenceLength(perm, len(perm)) == maxpl:
            maxp.append(perm)
        if LongestIncreasingSubsequenceLength(perm, len(perm)) < minpl:
            minp = [perm]
            minpl = LongestIncreasingSubsequenceLength(perm, len(perm))
        elif LongestIncreasingSubsequenceLength(perm, len(perm)) == minpl:
            minp.append(perm)
for i in maxp:
    print(i, 'max')
print()
for i in minp:
    print(i)
        
