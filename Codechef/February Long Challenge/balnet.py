from collections import defaultdict
def case1(n, m, z):
    d = sefaultdict(int)
    if n >= 20:
        print("^"*m)
        return
    for mask in range(2**m):
        for i in range(1, n+1):
            d[i] = 1
        bit = bin(mask)[2:].zfill(m)
        for i in range(m):
            if bit[i] == '1':
                if d[z[i][1]] > 0:
                    d[z[i][0]]+=d[z[i][1]]
                    d[z[i][1]] = 0
            else:
                if d[z[i][0]] > 0:
                    d[z[i][1]]+=d[z[i][0]]
                    d[z[i][0]] = 0
        count = 0
        for i in d.items():
            if i[1]:
                count+=1
        if count >= (n+1)//2:
            ans = []
            for i in bit:
                if i == '1':
                    ans.append('^')
                else:
                    ans.append('v')
            print(''.join(ans))
            return
    print("failure")
for _ in range(int(input())):
    n, m = map(int, (input().split()))
    z = []
    for i in range(m):
        z.append(list(map(int, input().split())))
    if m <= 10:
        case1(n, m, z)
    else:
        case2(n, m, z)