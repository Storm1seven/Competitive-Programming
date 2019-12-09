n = int(input())
s = input()
start = s[0]
end = s[-1]
count_begin = 0
count_end = 0
for i in s:
 if i == start:
  count_begin+=1
 else:
  break
for i in reversed(s):
 if i == end:
  count_end+=1
 else:
  break
if start == end:
 print((count_end+1+count_begin*(count_end+1))%998244353) 
else:
 print((count_begin+count_end+1)%998244353)