ans = [0]*180
for i in range(3, 361):
    angle = 180/i
    for x in range(1, i-1):
        ang = angle*x
        if ang == int(ang):
            if not ans[int(ang)]:
                ans[int(ang)] = i
for _ in range(int(input())):
    print(ans[int(input())])