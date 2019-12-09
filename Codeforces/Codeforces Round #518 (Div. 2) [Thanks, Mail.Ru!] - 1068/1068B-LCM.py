import math
def no_of_divisors(n) : 
    count = 0
    i = 1
    while i <= math.sqrt(n):           
        if (n % i == 0) : 
            if (n / i == i) : 
                count+=1 
            else : 
                count+=2 
        i = i + 1
    return count
n = int(input())
print(no_of_divisors(n))
  