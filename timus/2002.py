from collections import defaultdict
n = int(input())
password = defaultdict(str)
state = defaultdict(int)
for i in range(n):
    a = list(input().split())
    if len(a) == 3:
        if a[0] == "register":
            if a[1] in password:
                print("fail: user already exists")
            else:
                password[a[1]] = a[2]
                print("success: new user added")
        else:
            if a[1] not in password:
                print("fail: no such user")
            else:
                if password[a[1]] != a[2]:
                    print("fail: incorrect password")
                else:
                    if state[a[1]] == 1:
                        print("fail: already logged in")
                    else:
                        print("success: user logged in")
                        state[a[1]] = 1
    else:
        if a[1] not in password:
            print("fail: no such user")
        else:
            if state[a[1]] == 0:
                print("fail: already logged out")
            else:
                print("success: user logged out")
                state[a[1]] = 0