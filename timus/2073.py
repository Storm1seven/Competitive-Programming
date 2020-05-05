n = int(input())
print("+------------------------------+--------+-------------+")
print("|Contest name                  |Date    |ABCDEFGHIJKLM|")
print("+------------------------------+--------+-------------+")
for i in range(n):
    name = input()
    date = input()
    total, attempt = map(int, input().split())
    problems = ["." for i in range(total)]
    for j in range(attempt):
        z = list(input().split())
        num, verdict = z[0], z[1:]
        num = ord(num)-ord('A')
        if verdict[0] == "Accepted":
            problems[num] = "o"
        else:
            if problems[num] != 'o':
                problems[num] = "x"
    name = name+" "*(30-len(name))
    problems = ''.join(problems)+" "*(13-total)
    print("|"+name+"|"+date+"|"+problems+"|")
    print("+------------------------------+--------+-------------+")