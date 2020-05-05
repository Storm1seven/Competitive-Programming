a = list(input().split())
a = ''.join(a)
for i in range(16):
    b = bin(i)[2:].zfill(4)
    b+=str((int(b[1])+int(b[2])+int(b[3]))%2)
    b+=str((int(b[0])+int(b[2])+int(b[3]))%2)
    b+=str((int(b[1])+int(b[0])+int(b[3]))%2)
    x = int(a, 2)^int(b, 2)
    if bin(x).count('1') == 1 or x == 0:
        for i in b:
            print(i, end = " ")
        print()
        exit()