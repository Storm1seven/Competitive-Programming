s = input()
a = ['ABC', 'ACB', 'BCA', 'BAC', 'CAB', 'CBA']
for i in a:
    if i in s:
        print('YES')
        exit()
print('NO')