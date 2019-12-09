def __DecimalToAnyBaseArrayRecur__(array, decimal, base):
    array.append(decimal % base)
    div = decimal // base
    if(div == 0):
        return;
    __DecimalToAnyBaseArrayRecur__(array, div, base)
 def DecimalToAnyBaseArray(decimal, base):
    array = []
    __DecimalToAnyBaseArrayRecur__(array, decimal, base)
    return "".join(map(str, array[::-1]))
for _ in range(int(input())):
    # n = _
    # print(_, end = " ")
    n = int(input())
    z = DecimalToAnyBaseArray(n, 3)
    ind2 = -1
    for i in range(len(z)):
        if z[i] == "2":
            ind2 = i
            break
    if ind2 == -1:
        print(n)
    else:
        if "0" not in z:
            print(int("1"+"0"*len(z), 3))
        else:
            ind0 = len(z)+1
            for i in range(len(z)):
                if i < ind2 and z[i] == "0":
                    ind0 = i
            if ind0 < ind2:
                ans = z[:ind0]
                ans+="1"
                ans+="0"*(len(z) - ind0 - 1)
                print(int(ans, 3))
            else:
                print(int("1"+"0"*len(z), 3))