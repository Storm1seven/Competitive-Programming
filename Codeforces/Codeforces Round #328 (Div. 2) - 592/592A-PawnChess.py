import math
from collections import deque, defaultdict
from sys import stdin, stdout
# input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
board = []
for i in range(8):
    board.append(input())
def getmoves(i, j, move):
    if move == -1:
        for k in range(i-1, -1, -1):
            if board[k][j] != '.':
                return 1000
        return i
    else:
        for k in range(i+1, 8, 1):
            if board[k][j] != '.':
                return 1000
        return 8-i-1
a, b = 1000, 1000
for i in range(8):
    for j in range(8):
        if board[i][j] == "W":
            a = min(getmoves(i, j, -1), a)
        elif board[i][j] == "B":
            b = min(getmoves(i, j, +1), b)
if a <= b:
    print("A")
else:
    print("B")