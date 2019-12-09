import heapq
import collections
from sys import stdin, stdout
input = stdin.readline
def dijkstra(adjacency_list, src, v, halt):
    dist = {i:-1 for i in range(v+1)}
    minHeap = []
    dist[src] = 0
    heapq.heappush(minHeap, [dist[src], src])
    while(minHeap):
        first = heapq.heappop(minHeap)
        first_dist = first[0]
        first_vertex = first[1]
        if first_dist == dist[first_vertex]:
            while first_dist in halt[first_vertex]:
                first_dist+=1
            for i in adjacency_list[first_vertex]:
                i_vertex = i[0]
                i_weight = i[1]
                if dist[i_vertex] == -1:
                    dist[i_vertex] = first_dist + i_weight
                    heapq.heappush(minHeap, [dist[i_vertex], i_vertex])
                elif first_dist + i_weight < dist[i_vertex]:
                    dist[i_vertex] = first_dist + i_weight
                    heapq.heappush(minHeap, [dist[i_vertex], i_vertex])
    return dist[n]
n, m = map(int, input().split())
d = collections.defaultdict(list)
halt = [0]
for _ in range(m):
    a, b, w = map(int, input().split())
    d[a].append([b, w])
    d[b].append([a, w])
for _ in range(n):
    z = set(list(map(int, input().split()))[1:])
    halt.append(z)
print(dijkstra(d, 1, n, halt))