n = int(input())
h1 = list(map(int, input().split()))
h2 = list(map(int, input().split()))
ans1 = ans2 = 0
for i in range(n):
    a1, a2 = ans1, ans2
    ans1 = max(a1, a2+h1[i])
    ans2 = max(a2, a1+h2[i])
print(max(ans1, ans2))