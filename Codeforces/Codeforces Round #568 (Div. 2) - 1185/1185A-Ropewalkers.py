a, b, c, d = map(int, input().split())
a, b, c = sorted([a, b, c])
print(max(d - (b-a), 0)+max(d - (c-b), 0))