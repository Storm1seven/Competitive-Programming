n = int(input())
a = list(map(int, input().split()))
black, white = 0, 0
for i in range(n):
    black+=a[i]//2
    white+=a[i]//2
    if i%2:
        black+=a[i]%2
    else:
        white+=a[i]%2
if white == black:
    print(white)
else:
    print(min(black, white))