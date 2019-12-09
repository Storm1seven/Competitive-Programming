for _ in range(int(input())):
    s = input()
    a = [i for i in s]
    a.sort()
    key = 'abcdefghijklmnopqrstuvwxyz'
    if "".join(a) in key:
        print("YES")
    else:
        print("NO")