def check(n, p, a, counter):
    s = 0
    for i in range(n):
        s+=counter[i]*a[i]
    if s <= p:
        return False
    for i in range(n):
        if counter[i]:
            if s-a[i] < p:
                continue
            else:
                return False
    return True
def update(counter, carry, n):
    if n == -1:
        return
    if carry == 0:
        return
    counter[n]+=1
    carry = counter[n]//21
    counter[n]%=21
    update(counter, carry, n-1)
def case():
    n, p = map(int, input().split())
    a = list(map(int, input().split()))
    counter = [0 for i in range(n)]
    while min(counter) < 20:
        update(counter, 1, len(counter)-1)
        if check(n, p, a, counter):
            print("YES", *counter)
            return
    print("NO")
for _ in range(int(input())):
    case()
