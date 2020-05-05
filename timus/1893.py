s = input()
number = int(s[:-1])
letter = s[-1]
if number < 3:
    if letter in 'AD':
        print("window")
    else:
        print("aisle")
elif number < 21:
    if letter in "AF":
        print("window")
    else:
        print("aisle")
else:
    if letter in "AK":
        print("window")
    elif letter in "CDGH":
        print('aisle')
    else:
        print("neither")