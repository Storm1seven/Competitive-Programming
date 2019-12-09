import itertools
a = []
for i in range(1, 5):
    print("? "+str(i)+" "+str(i+1), flush = True)
    a.append(int(input()))
z = [4, 8, 15, 16, 23, 42]
for i in itertools.permutations(z, 6):
    z1 = []
    for j in range(4):
        z1.append(i[j]*i[j+1])
    if a == z1:
        print("! ", end = "")
        print(*i)
        exit()