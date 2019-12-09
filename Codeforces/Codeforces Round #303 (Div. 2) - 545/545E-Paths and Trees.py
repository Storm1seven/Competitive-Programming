import heapq
from collections import defaultdict
from sys import stdin, stdout
input = stdin.readline
print = stdout.write
def SPT(adjacency_list, src, v):
    heap = [[0, 0, src, 0]]
    visited = [False]*(n+1)
    spt = []
    total = 0
    while heap:
        first_dist, weight, vertex, edge_num = heapq.heappop(heap)
        if not visited[vertex]:
            spt.append(edge_num)
            total+=weight
            visited[vertex] = True
            for _vertex, _weight, _edgenum in adjacency_list[vertex]:
                if not visited[_vertex]:
                    heapq.heappush(heap, [first_dist+_weight, _weight, _vertex, _edgenum])
    return (spt, total)
n, m = map(int, input().split())
d = defaultdict(list)
for i in range(1, m+1):
    a, b, w = map(int, input().split())
    d[a].append([b, w, i])
    d[b].append([a, w, i])
src = int(input())
x = SPT(d, src, n)
print(str(x[1])+'\n')
x = map(str, x[0][1::])
print(' '.join(x))