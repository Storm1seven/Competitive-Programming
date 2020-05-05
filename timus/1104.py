s = input()
val = 0
maxval = 0
for i in s:
    if i.isupper():
        val+=ord(i)-ord('A')+10
        maxval = max(maxval,ord(i)-ord('A')+10)
    else:
        val+=int(i)
        maxval = max(maxval, int(i))
for i in range(max(2, maxval+1), 37):
    if val%(i-1) == 0:
        print(i)
        exit()
print("No solution.")