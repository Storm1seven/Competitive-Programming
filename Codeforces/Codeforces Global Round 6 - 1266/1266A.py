n = int(input())
for i in range(n):
    flag = True
    x = input()
    s = 0
    ci = 0
    for i in x:
        s+=int(i)
        ci+=int(int(i)%2 == 0 and i != '0')
    if s%3 == 0 and ((ci > 0 and x.count('0') > 0) or x.count('0') > 1):
        print('red')
    else:
        print('cyan')