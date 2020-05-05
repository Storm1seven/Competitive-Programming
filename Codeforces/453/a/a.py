primes = [1 for i in range(25001)]
string = ""
def sieve(n):
    global string
    primes[0] = primes[1] = 0
    for i in range(2, 160):
        if primes[i] == 1:
            for j in range(i*i, 25001, i):
                primes[j] = 0
    for i in range(len(primes)):
        if primes[i] == 1:
            string+=str(i)

sieve(25001)

def solution(i):
    print(string[i:i+5])
