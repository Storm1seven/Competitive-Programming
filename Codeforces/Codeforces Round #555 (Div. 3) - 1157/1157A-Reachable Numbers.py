s = input()
x = set([s])
flag = 2
while flag:
    if s == '1':
        flag-=1
    s = str(int(s)+1)
    while True:
        if s[-1] == '0':
            s = s[:len(s) - 1]
        else:
            break
    x.add(s)
print(len(x))