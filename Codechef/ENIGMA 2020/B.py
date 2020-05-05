n = int(input())
m, c = map(int, input().split())
pow1, pow2 = 0, 0
for i in range(n):
    x, y, p = map(int, input().split())
    val = y-m*x-c
    if val < 0:
        pow1+=p
    else:
        pow2+=p
print(max(pow1, pow2))