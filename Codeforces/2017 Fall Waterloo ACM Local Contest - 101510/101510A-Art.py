def func(x, y):
    for i in range(t):
        j = 0
        while j < len(x)-1:
            if x[j] == 'B' and x[j + 1] == 'G':
                x[j], x[j + 1] = x[j + 1], x[j]
                j += 1
            j += 1
    return x
n, t = map(int, input().strip().split())
a = list(input().strip())
print ("".join(map(str, func(a, t))))