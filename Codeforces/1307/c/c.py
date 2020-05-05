from collections import defaultdict
# input = sys.stdin.readline
def getIndex(a):
    return ord(a) - 97
s = input()
d = defaultdict(int)
dp = [[0 for i in range(26)] for i in range(26)]
alphabet = 'abcdefghijklmnopqrstuvwxyz'
for i in s:
    for char in alphabet:
        dp[getIndex(char)][getIndex(i)]+=d[char]
    d[i]+=1
ans = max(d.values())
for i in dp:
    ans = max(ans, max(i))
print(ans)