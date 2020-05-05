import math, collections, sys
# input = sys.stdin.readline
def case():
    s = input()
    z = [s[0]]
    atEnd = True
    index = 0
    vis = [0 for i in range(26)]
    vis[ord(s[0])-97] = 1
    for i in range(1, len(s)):
        # print(z)
        if atEnd:
            if index == 0:
                if vis[ord(s[i])-97] and index+1 < len(z) and z[index+1] == s[i]:
                    index+=1
                elif not vis[ord(s[i])-97]:
                    z = [s[i]]+z
                    vis[ord(s[i])-97] = 1
                else:
                    print("NO")
                    return
            else:
                if vis[ord(s[i])-97] and 0 <= index-1 and z[index-1] == s[i]:
                    index-=1
                elif not vis[ord(s[i])-97]:
                    z.append(s[i])
                    index+=1
                    vis[ord(s[i])-97] = 1
                else:
                    print("NO")
                    return
        else:
            if z[index-1] == s[i]:
                index-=1
            elif z[index+1] == s[i]:
                index+=1
            else:
                print("NO")
                return
        if index == 0 or index == len(z) - 1:
            atEnd = True
        else:
            atEnd = False
    # print(z)
    for i in 'abcdefghijklmnopqrstuvwxyz':
        if i not in z:
            z.append(i)
    print("YES")
    print(''.join(z))
for _ in range(int(input())):
    case()