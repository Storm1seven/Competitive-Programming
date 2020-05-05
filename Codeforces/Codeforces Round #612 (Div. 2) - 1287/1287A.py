def case():
    n = int(input())
    s = input()
    flag = False
    count = 0 
    mcount = 0
    for i in s:
        if i == 'A':
            flag = True
        if not flag:
            continue
        if i == 'P':
            count+=1
        else:
            mcount = max(count, mcount)
            count = 0
    mcount = max(count, mcount)
    print(mcount)
for _ in range(int(input())):
    case()