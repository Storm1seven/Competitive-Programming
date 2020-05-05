def dist(a, b):
    return abs(a[0]-b[0])+abs(a[1]-b[1])
x0, y0, ax, ay, bx, by = map(int, input().split())
xs, ys, t = map(int, input().split())
points = [[x0, y0]]
prev = 0
while prev < 10**18:
    points.append([ax*points[-1][0]+bx, ay*points[-1][1]+by])
    prev = dist(points[-1], points[-2])
n = len(points)
ans = 0
for i in range(n):
    for j in range(i, n):
        path = dist(points[i], points[j])
        left = dist([xs, ys], points[i])
        right = dist([xs, ys], points[j])
        if t >= min(left, right)+path:
            ans = max(ans, j-i+1)
print(ans)