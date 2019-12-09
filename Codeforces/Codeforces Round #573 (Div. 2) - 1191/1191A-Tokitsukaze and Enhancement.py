n = int(input())
d ={1 :"A", 3:"B", 2:"C", 0:"D"}
a = ord(d[n%4])
b = ord(d[(n+1)%4])
c = ord(d[(n+2)%4])
if a == min(a, b, c):
    print(0, d[n%4])
elif b == min(a, b, c):
    print(1, d[(n+1)%4])
else:
    print(2, d[(n+2)%4])