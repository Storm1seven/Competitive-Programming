def case():
    s = input()
    d = {'r':['r', 'b'], 'b':['y', 'b'], 'y':['p', 'b'], 'p':['g', 'b'], 'g':['r', 'b']}
    c = 'r'
    for i in s:
        c = d[c][int(i)]
    if c == 'g':
        print("YES")
    else:
        print("NO")
for _ in range(int(input())):
    case()