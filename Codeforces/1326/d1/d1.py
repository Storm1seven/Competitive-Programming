import math, collections, sys
sys.setrecursionlimit(10**6)
x = ''
y = ''
def lpp(st):
    rev = st[::-1]
    m = len(st)
    longestPalindromicPrefix = 1
    if m <= 1:
        return m
    st+='#';
    st+=rev;
    n=len(st)
    z = [0 for i in xrange(n+4)]
    l=0
    r=0
    for i in xrange(1, n):
        if i > r:
            l = i
            r = i
            while r < n and st[r-l] == st[r]:
                r+=1
            z[i] = r-l
            r-=1
        else:
            k = i-l
            if z[k] < r-i+1:
                z[i] = z[k]
            else:
                l = i
                while r < n and st[r-l] == st[r]:
                    r+=1
                z[i] = r-l
                r-=1
    for i in xrange(m+1, n):
        if 2*z[i]>=2*m-i and z[i]>longestPalindromicPrefix:
            longestPalindromicPrefix = z[i]
    return longestPalindromicPrefix
def suffix(l, r, s):
    st = ""
    for i in xrange(r, l-1, -1):
        st+=s[i]
    n = lpp(st)
    val = ""
    for i in xrange(n):
        val+=s[r-i]
    return val
def prefix(l, r, s):
    n = lpp(s[l:r+1])
    return s[l:l+n]
def getString(l, r, s):
    global x, y
    if l > r:
        return
    if l == r:
        x+=s[l]
        return
    if s[l] == s[r]:
        x+=s[l]
        y+=s[r]
        getString(l+1, r-1, s)
    else:
        p = suffix(l, r, s)
        q = prefix(l, r, s)
        if len(p) > len(q):
            x+=p
        else:
            y+=q
        return
def solve():
    s = raw_input()
    n = len(s)
    getString(0, n-1, s)
    print(x+y[::-1])
for _ in xrange(int(raw_input())):
    x = ''
    y = ''
    solve()