t1, t2 = map(int, input().split())
a = list(map(int, input().split()))
t2-=sum(a)*20
if t2 >= t1:
    print("No chance.")
else:
    print("Dirty debug :(")