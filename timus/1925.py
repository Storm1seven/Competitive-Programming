n, k = map(int, input().split())
exp = 0
act = 0
for i in range(n):
    b, g = map(int, input().split())
    act+=g
    exp+=b-2
if exp-act+k-2 < 0:
    print("Big Bang!")
else:
    print(exp-act+k-2)