def leap(year):
    if (year % 4) == 0:
        if (year % 100) == 0:
            if (year % 400) == 0:
                return True
            else:
                return False
        else:
            return True
    else:
        return False

def dayofweek(d, m, y): 
    t = [ 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 ] 
    y -= m < 3
    return (( y + int(y / 4) - int(y / 100) + int(y / 400) + t[m - 1] + d) % 7) 

def case():
    m1, y1 = map(int, raw_input().split(" "))
    m2, y2 = map(int, raw_input().split(" "))
    if m1 <= 2:
        m1 = 2
    else:
        m1 = 2
        y1+=1
    if m2 < 2:
        m2 = 2
        y2-=1
    else:
        m2 = 2
    count = 0
    for i in xrange(y1, y1+400):
        if dayofweek(1, 2, i) == 6:
            count+=1
        else:
            if not leap(i) and dayofweek(1, 2, i) == 0:
                count+=1
    count*=(y2-y1)//400
    y1+=((y2-y1)//400)*400
    for i in xrange(y1, y2+1):
        if dayofweek(1, 2, i) == 6:
            count+=1
        else:
            if not leap(i) and dayofweek(1, 2, i) == 0:
                count+=1
    print count

for _ in range(int(input())):
    case()