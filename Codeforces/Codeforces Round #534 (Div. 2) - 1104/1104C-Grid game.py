s = input()
count0 = 0
count1 = 0
for i in s:
    if i == '1':
        count1+=1
        print(count1%4 + 1, 3)
    else:
        count0+=1
        print(1+ count0%2 * 2, 1)