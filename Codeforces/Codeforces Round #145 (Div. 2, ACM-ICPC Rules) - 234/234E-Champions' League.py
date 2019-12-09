import math
from collections import deque, defaultdict
import sys
sys.stdin=open("input.txt","r")
sys.stdout=open("output.txt","w")
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
n = int(input())
x = listin()
z = []
basket = [[], [], [], []]
for i in range(n):
    team, rat = input().split()
    rat = int(rat)
    z.append([rat, team])
z.sort(reverse = True)
i = 0
for j in range(n):
    if len(basket[i]) == n//4:
        i+=1
    basket[i].append(z[j])
def nextRandom():
    y = (x[0]*x[1]+x[2])%x[3]
    x[0] = y
    return x[0]
groups = [[] for i in range(n//4)]
for i in range(n//4):
    for j in range(4):
        k = nextRandom()
        groups[i].append(basket[j][k%len(basket[j])])
        basket[j].pop(k%len(basket[j]))
alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for i in range(n//4):
    print("Group "+alph[i]+":")
    for j in groups[i]:
        print(j[1])