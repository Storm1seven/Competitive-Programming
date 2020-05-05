import itertools
n = int(input())
p = tuple(map(int, input().split()))
q = tuple(map(int, input().split()))
z = [i for i in range(1, n+1)]
x = list(itertools.permutations(z))
print(abs(x.index(p)-x.index(q)))
