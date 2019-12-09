n = int(input())
s = input()
possible = ['RGB', 'RBG', 'BGR', 'BRG', 'GBR', 'GRB']
count = [0]*6
for i in range(6):
    possible[i] = possible[i]*(n//3) + possible[i][:n%3:]
for i in range(6):
    for j in range(n):
        if possible[i][j] != s[j]:
            count[i]+=1 
print(min(count))
print(possible[count.index(min(count))])