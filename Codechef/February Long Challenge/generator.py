import random
test = 5
print(test)
for i in range(test):
    n = random.randint(1, 1001)
    m = random.randint(1, 1001)
    a = set([])
    b = set([])
    while len(a) < n:
        a.add(random.randint(-100000, 100001))
        if 0 in a:
            a.remove(0)
    while len(b) < m:
        b.add(random.randint(-100000, 100001))
        if 0 in b:
            b.remove(0)
    print(n, m)
    print(*list(a))
    print(*list(b))