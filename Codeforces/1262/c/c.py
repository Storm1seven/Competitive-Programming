import math, collections, sys
# input = sys.stdin.readline
def solve():
    n, k = map(int, input().split())
    s = input()
    t = "()"*(k-1)+"("*((n-2*(k-1))//2)+')'*((n-2*(k-1))//2)
    s = [i for i in (s)]
    moves = []
    for i in range(n):
        if s[i]!=t[i]:
            j = i+1
            while j < n:
                if s[j] == t[i]:
                    s = s[:i]+s[i:j+1][::-1]+s[j+1:]
                    moves.append([i+1, j+1])
                    break
                else:
                    j+=1
    print(len(moves))
    for i in moves:
        print(*i)
for _ in range(int(input())):
    solve()