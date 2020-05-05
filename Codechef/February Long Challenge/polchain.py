n = int(input())
if n!=2:
    exit()
m1 = int(input())
if m1 != 4:
    exit()
p1 = []
for i in range(4):
    p1.append(list(map(int, input().split())))
m2 = int(input())
if m2!=4:
    exit()
p2 = []
for i in range(4):
    p2.append(list(map(int, input().split())))
left1 = min(p1[0][0], p1[1][0], p1[2][0], p1[3][0])
right1 = max(p1[0][0], p1[1][0], p1[2][0], p1[3][0])
left2 = min(p2[0][0], p2[1][0], p2[2][0], p2[3][0])
right2 = max(p2[0][0], p2[1][0], p2[2][0], p2[3][0])
bottom1 = min(p1[0][1], p1[1][1], p1[2][1], p1[3][1])
top1 = max(p1[0][1], p1[1][1], p1[2][1], p1[3][1])
bottom2 = min(p2[0][1], p2[1][1], p2[2][1], p2[3][1])
top2 = max(p2[0][1], p2[1][1], p2[2][1], p2[3][1])
b1 = right1-left1
l1 = top1-bottom1
b2 = right2-left2
l2 = top2-bottom2
if l1 <= l2 and b1 <= b2 or l2 <= l1 and b2 <= b1:
    if l2 <= l1 and b2 <= b1:
        left1, left2 = left2, left1
        right1, right2 = right2, right1
        top1, top2 = top2, top1
        bottom1, bottom2 = bottom2, bottom1
else:
    print(-1)
    exit()
leftdiff = left1 - left2
rightdiff = right2 - right1
topdiff = top2 - top1
bottomdiff = bottom1 - bottom2
ans = abs(min(0, leftdiff)) + abs(min(0, rightdiff)) + abs(min(0, topdiff)) + abs(min(0, bottomdiff))
print(ans)