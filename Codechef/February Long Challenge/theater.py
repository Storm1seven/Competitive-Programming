from collections import defaultdict
import itertools
total = 0
time = ['12', '3', '6', '9']
z = ['A', 'B', 'C', 'D']
z = list(itertools.permutations(z))
def case():
    global total
    n = int(input())
    d = {}
    for i in time:
        d[i] = defaultdict(int)
    for i in range(n):
        m, t = input().split()
        d[t][m]+=1
    profit = -(10**10)
    for i in z:
        cost = 0
        audience = []
        for j in range(4):
            audience.append(d[time[j]][i[j]])
        audience.sort(reverse = True)
        price = 100
        for j in range(4):
            if audience[j] == 0:
                cost-=100
            cost+=audience[j]*price
            price-=25
        profit = max(cost, profit)
    print(profit)
    total+=profit
for _ in range(int(input())):
    case()
print(total)