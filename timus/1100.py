z = []
for _ in range(int(input())):
    x = list(map(int, input().split()))[::-1]
    x = [x[0]] + [-1*_] + [x[1]]
    z.append(x)
z.sort(reverse=True)
for i in z:
    print(i[2], i[0])