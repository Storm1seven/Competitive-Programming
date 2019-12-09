def sum_degits(n):
    n = [i for i in str(n)]
    return sum(map(int, n))
n = int(input())
while True:
    if sum_degits(n)%4 == 0:
        print(n)
        exit()
    n+=1