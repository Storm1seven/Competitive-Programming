n, sx, sy = map(int, input().split())
left, up, right, down = 0, 0, 0, 0
for i in range(n):
    x, y = map(int, input().split())
    if x < sx:
        left+=1
    elif x > sx:
        right+=1
    if y < sy:
        down+=1
    elif y > sy:
        up+=1
m = max(left, right, up, down)
print(m)
if up == m:
    print(sx, sy+1)
elif down == m:
    print(sx, sy-1)
elif left == m:
    print(sx-1, sy)
else:
    print(sx+1, sy)