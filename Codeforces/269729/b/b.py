import math, collections, sys
# input = sys.stdin.readline
a = input()
b = input()
num = [0 for i in range(len(b))]
for i in range(len(b)):
    num[i] = min(i+1, len(a))
for i in range(len(b)-1, -1, -1):
    if (len(b)-i < num[i]):
        num[i] = i-len(b)
print(num)