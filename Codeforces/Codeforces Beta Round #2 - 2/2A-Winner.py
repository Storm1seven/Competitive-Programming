import collections
t = int(input())
d = collections.defaultdict(int)
e = collections.defaultdict(int) 
z = []
probable = []
for _ in range(t):
    name, score = input().split()
    z.append(name+" "+score)
    d[name]+=int(score)
finalscore = max(d.values())
for i in d:
 if d[i]==finalscore:
  probable.append(i)
for i in z:
 name, score = i.split()
 e[name]+=int(score)
 if name in probable and e[name]>=finalscore:
  print(name)
  break