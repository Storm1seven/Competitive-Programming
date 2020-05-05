import math, collections, sys
# input = sys.stdin.readline
for _ in range(int(input())):
    s = input()
    a = s.find('1')
    b = s.rfind('1')
    if '1' not in s:
        print(0)
        continue
    count = 0
    for i in range(a, b+1):
        if s[i] == '0':
            count+=1
    print(count)
