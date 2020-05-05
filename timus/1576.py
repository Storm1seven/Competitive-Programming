n1, c1 = map(int, input().split())
n2, t, c2 = map(int, input().split())
n3 = int(input())
k = int(input())
mt = 0
for i in range(k):
    m, s = map(int, input().split(':'))
    if m == 0 and s <= 6:
        continue
    mt+=m
    if s:
        mt+=1
basic = n1+mt*c1
combined = n2
if mt > t:
    combined+=(mt-t)*c2
unlimited = n3
print("Basic:     "+str(basic))
print("Combined:  "+str(combined))
print("Unlimited: "+str(unlimited))