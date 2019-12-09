import heapq
import collections
from sys import stdin, stdout
input = stdin.readline
def dijkstra(adjacency_list, src, v):
    pred = {i:i for i in adjacency_list}
    dist = {i:'x' for i in range(v+1)}
    minHeap = []
    dist[src] = 0
    heapq.heappush(minHeap, [dist[src], src])
    while(minHeap):
        first = heapq.heappop(minHeap)
        first_dist = first[0]
        first_vertex = first[1]
        if  first_dist == dist[first_vertex]:
            for i in adjacency_list[first_vertex]:
                i_vertex = i[0]
                i_weight = i[1]
                if dist[i_vertex] == 'x':
                    dist[i_vertex] = dist[first_vertex] + i_weight
                    heapq.heappush(minHeap, [dist[i_vertex], i_vertex])
                    pred[i_vertex] = first_vertex
                elif dist[first_vertex] + i_weight < dist[i_vertex]:
                    dist[i_vertex] = dist[first_vertex] + i_weight
                    heapq.heappush(minHeap, [dist[i_vertex], i_vertex])
                    pred[i_vertex] = first_vertex
    return (dist, pred)
n, m = map(int, input().split())
d = collections.defaultdict(list)
for _ in range(m):
    a, b, w = map(int, input().split())
    d[a].append([b, w])
    d[b].append([a, w])
z = dijkstra(d, 1, n)
dist = z[0]
pred = z[1]
if dist[n]=='x':
    print(-1)
else:
    ans = []
    ans.append(n)
    while ans[-1]!=1:
        ans.append(pred[ans[-1]])
    ans = ans[::-1]
    print(*ans)