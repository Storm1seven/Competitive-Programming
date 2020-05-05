s = input()
cost = 0
l1 = ['a','d','g','j','m','p','s','v','y','.',' ']
l2 = ['b','e','h','k','n','q','t','w','z',',']
l3 = ['c','f','i','l','o','r','u','x','!']
for i in s:
    if i in l1:
        cost+=1
    elif i in l2:
        cost+=2
    else:
        cost+=3
print(cost)