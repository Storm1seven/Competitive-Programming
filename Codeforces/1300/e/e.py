input = raw_input
n = int(input())
a = list(map(int, input().split(" ")))
for i in xrange(n):
    a[i]*=1.0
st = []
for i in a:
    st.append([i, 1])
    while len(st) > 1:
        x = st.pop()
        y = st.pop()
        if x[0] <= y[0]:
            total = x[0]*x[1]+y[0]*y[1]
            count = x[1]+y[1]
            avg = total/count
            st.append([avg, count])
        else:
            st.append(y)
            st.append(x)
            break
for i in st:
    for j in xrange(i[1]):
        print(i[0])