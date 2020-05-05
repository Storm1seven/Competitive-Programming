from collections import defaultdict
import math
import random
# def getMinRot(a):
#     if len(set(a)) == 1:
#         return 0
#     ans = 0
#     pos = 0
#     for i in range(30):
#         for j in a:
#             if j != 10**8:
#                 if j > pos:
#                     pos = j
#                     ans = i
#                 break
#         a = [a[-1]]+a[:-1]
#     return ans
# def getRed(a):
#     return math.ceil(a/24024) - 1
w, h, r = map(int, input().split())
z = []
for _ in range(r):
    p = list(map(int, input().split()))
    z.append(p)
# grid = [[10**8 for i in range(30)] for j in range(30)]
# q = []
# for i in z:
#     grid[getRed(i[0])][getRed(i[1])] = min(grid[getRed(i[0])][getRed(i[1])], i[1]%24024)
# # print(grid)
# for idx, i in enumerate(grid):
#     n = getMinRot(i)
#     for _ in range(n):
#         q.append([1, idx+1])
print(30, 30, 1024)
# for i in q:
#     print(*i)
for i in range(1024):
    print(random.randint(1, 2), random.randint(1, 30))