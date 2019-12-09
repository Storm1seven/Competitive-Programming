a = list(map(int, input().split('+')))
a.sort()
z = [str(i) for i in a]
print('+'.join(z))