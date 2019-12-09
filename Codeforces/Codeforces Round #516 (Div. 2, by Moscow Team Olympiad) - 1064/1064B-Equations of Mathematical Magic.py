for _ in range(int(int(input()))):
    n = int(input())
    print(2**(bin(n).count('1')))