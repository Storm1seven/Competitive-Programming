def decimal(a):
    val = 0
    for i in range(len(a)):
        val+=(26**i)*(ord(a[len(a)-1-i])-ord('A')+1)
    return val
def alpha(a):
    val = ''
    while a > 0:
        a-=1
        val+=chr(ord('A')+a%26)
        a//=26
    return val[::-1]
for _ in range(int(input())):
    s = input()
    digits = '1234567890'
    x = []
    string = ''
    number = ''
    for i in s:
        if i not in digits:
            if number:
                x.append(number)
            string+=i
            number = ''
        else:
            if string:
                x.append(string)
            number+=i
            string = ''
    x.append(number)
    if len(x) == 4:
        print(alpha(int(x[-1]))+x[1])
    else:
        print('R'+x[-1]+'C'+str(decimal(x[0])))