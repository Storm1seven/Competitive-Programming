from collections import defaultdict
freq = defaultdict(int)
price = defaultdict(int)
for i in range(6):
    s = input()
    s = input()
    v = int(input())
    freq[s]+=1
    if not price[s]:
        price[s] = v
    else:
        price[s] = min(v, price[s])
maxfreq = max(freq.values())
z = []
for i in freq:
    if freq[i] == maxfreq:
        z.append(i)
x = []
for i in z:
    x.append([price[i], i])
x.sort()
print(x[0][1])