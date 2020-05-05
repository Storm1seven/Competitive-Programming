s = set()
count = 0
for i in range(int(input())):
    x = input()
    if x in s:
        count+=1
    else:
        s.add(x)
print(count)