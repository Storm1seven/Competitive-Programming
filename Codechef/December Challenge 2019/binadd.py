for _ in range(int(input())):
    a = input()
    b = input()
    if a == "0":
        print(1)
        continue
    elif b == '0':
        print(0)
        continue
    if len(a) < len(b):
        a = '0'*(len(b)-len(a)) + a
    elif len(b) < len(a):
        b = '0'*(len(a)-len(b)) + b
    a = a[::-1]
    b = b[::-1]
    c = 0
    count = 0
    for i in range(len(a)):
        if int(a[i]) + int(b[i]) + c >= 2:
            if int(a[i]) + int(b[i]) + c == 2:
                count+=1
            c = 1
        else:
            c = 0
    print(count+c)
