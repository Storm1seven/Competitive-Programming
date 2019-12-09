n = int(input())
page = []
for _ in range(n):
    a, b = map(int, input().split())
    page.append(b)
count = 0
k = int(input())
for i in page:
    if k <= i:
        count+=1
print(count)