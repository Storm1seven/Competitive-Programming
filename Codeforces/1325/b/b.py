import math, collections, sys
input = sys.stdin.readline
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    print(len(set(a)))