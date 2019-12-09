import math
from collections import deque, defaultdict
from sys import stdin, stdout
#input = stdin.readline
# print = stdout.write
listin = lambda : list(map(int, input().split()))
mapin = lambda : map(int, input().split())
def isCyclicUtil(v, visited, recStack): 
        visited[v] = 1
        recStack[v] = 1
        for neighbour in d[v]: 
            if visited[neighbour] == 0: 
                if isCyclicUtil(neighbour, visited, recStack) == 1: 
                    return True
            elif recStack[neighbour] == 1: 
                return True
        recStack[v] = 0
        return False
def isCyclic(): 
        visited = {i:0 for i in 'abcdefghijklmnopqrstuvwxyz'}
        recStack = {i:0 for i in 'abcdefghijklmnopqrstuvwxyz'}
        for node in list(d.keys()): 
            if visited[node] == 0: 
                if isCyclicUtil(node,visited,recStack) == True: 
                    return True
        return False
def topologicalSortUtil(v,visited,stack): 
        visited[v] = 1
        for i in d[v]: 
            if not visited[i]: 
                topologicalSortUtil(i,visited,stack) 
        stack.insert(0,v)
def topologicalSort(): 
        visited = {i:0 for i in 'abcdefghijklmnopqrstuvwxyz'}
        stack =[]
        for i in list(d.keys()):
            if visited[i] == 0: 
                topologicalSortUtil(i,visited,stack) 
        string = ''
        while stack:
            string+=stack.pop()
        return string[::-1]
n = int(input())
a = []
visited = {i:0 for i in 'abcdefghijklmnopqrstuvwxyz'}
for i in range(n):
    a.append(input())
d = defaultdict(list)
for i in range(n-1):
    x = 0
    while x < len(a[i]) and x < len(a[i+1]):
        if a[i][x] != a[i+1][x]:
            d[a[i][x]].append(a[i+1][x])
            break
        x+=1
if not d.keys():
    if a != sorted(a):
        print("Impossible")
    else:
        print('abcdefghijklmnopqrstuvwxyz')
elif isCyclic():
    print("Impossible")
else:
    x = topologicalSort()
    letters = 'abcdefghijklmnopqrstuvwxyz'
    for i in letters:
        if i not in x:
            x+=i
    print(x)