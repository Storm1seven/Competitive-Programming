from sys import stdin
import re
z = stdin.readlines()
tram = 0
trolleybus = 0
for i in z:
    word = ""
    for j in i:
        if j.isalpha():
            word+=j
        else:
            if word == "tram":
                tram+=1
            elif word == "trolleybus":
                trolleybus+=1
            word = ""
if tram > trolleybus:
    print("Tram driver")
elif trolleybus > tram:
    print("Trolleybus driver")
else:
    print("Bus driver")