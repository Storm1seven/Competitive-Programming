s = input()
ans = ['' for i in range(len(s))]
index = 0
def solve(start, end):
    global index
    if start > end:
        return
    mid = (start+end)//2
    ans[mid] = s[index]
    index+=1
    solve(start, mid-1)
    solve(mid+1, end)
solve(0, len(s)-1)
print(''.join(ans))