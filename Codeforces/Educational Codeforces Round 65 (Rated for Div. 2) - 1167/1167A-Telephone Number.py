for _ in range(int(input())):
    n = int(input())
    s = input()
    flag = 0
    for i in range(len(s)-10):
        if s[i] == '8':
            flag = 1
    if flag:
        print("YES")
    else:
        print("NO")