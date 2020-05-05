n = int(input())
if n == 1:
    print(1)
elif n%3 == 0:
    print(3**(n//3))
elif n%3 == 1:
    print(3**(n//3-1)*4)
else:
    print(3**(n//3)*2)