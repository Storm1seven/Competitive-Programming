def addloop(a, b):
    count = 0
    while b > 0:
        v = (a&b)*2
        a^=b
        count+=1
        b = v
    return count
def add(a, b):
    if b == "0":
        return 0
    elif a == '0':
        return 1
    if len(a) < len(b):
        a = '0'*(len(b)-len(a)) + a
    elif len(b) < len(a):
        b = '0'*(len(a)-len(b)) + b
    a = a[::-1] + '0'
    b = b[::-1] + '0'
    c = 0
    count = 0
    for i in range(len(a)):
        if int(a[i]) + int(b[i]) + c >= 2:
            if int(a[i]) + int(b[i]) + c == 2:
                count+=1
            c = 1
        else:
            c = 0
    return count 
for i in range(20):
    for j in range(20):
        print(i, j, addloop(i, j), (addloop(i, j)-add(bin(i)[2:], bin(j)[2:])))