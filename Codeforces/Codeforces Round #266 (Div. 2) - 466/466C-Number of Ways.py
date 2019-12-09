def main():
    n = int(input())
    a = list(map(int, input().split()))
    s = sum(a)
    if s%3:
        print(0)
        exit()
    for i in range(1, n):
        a[i] += a[i-1]
    f = s//3
    s = s-f
    ans = count = 0
    for i in a[:len(a)-1:]:
        if i == s:
            ans+=count
        if i == f:
            count+=1
    print(ans)
if __name__ == '__main__':
    main()