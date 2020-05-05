t = [ 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 ] 
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
    y -= m < 3
    return (( y + int(y / 4) - int(y / 100) + int(y / 400) + t[m - 1] + d) % 7) 

for y1 in range(1, 501):
    for y2 in range(y1, 501):
        y11, y22 = y1, y2
        count = 0
        for i in range(y11, y11+400):
            if dayofweek(1, 2, i) == 6:
                count+=1
            else:
                if not leap(i) and dayofweek(1, 2, i) == 0:
                    count+=1
        count*=(y22-y11)//400
        y11+=((y22-y11)//400)*400
        for i in range(y11, y22+1):
            if dayofweek(1, 2, i) == 6:
                count+=1
            else:
                if not leap(i) and dayofweek(1, 2, i) == 0:
                    count+=1
        print(y1, y2, count)