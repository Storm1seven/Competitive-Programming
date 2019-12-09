board = []
count = 0
for _ in range(8):
 board.append(input())
for i in range(8):
 if board[i] == "BBBBBBBB":
  count+=1
 incount = 0
 for j in range(8):
  if board[j][i] == 'B':
   incount+=1
  if incount == 8:
   count+=1
if count == 16:
 print(8)
else:
 print(count)