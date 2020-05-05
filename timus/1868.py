medals = {'gold':set(), 'silver':set(), 'bronze':set()}
for i in range(12):
    if i//4 == 0:
        medals['gold'].add(input())
    elif i//4 == 1:
        medals['silver'].add(input())
    else:
        medals['bronze'].add(input())
n = int(input())
ans = []
for i in range(n):
    k = int(input())
    lc = 0
    for i in range(k):
        uni, med = input().split(' : ')
        if uni in medals[med]:
            lc+=1
    ans.append(lc)
print(ans.count(max(ans))*5)