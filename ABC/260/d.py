import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n, k = LI()
p = LI()
#p = [r - 1 for r in p]
x = []
o = []
d = collections.defaultdict(list)
m = 0
f = 0
b = [-1] * (n + 1)
for i in range(n):
    mi = 10000000
    for j in range(len(o)):
        if o[j] > p[i] and mi > o[j]:
            mi = o[j]
            xi = j
    if mi == 10000000:
        o.append(p[i])
        d[p[i]].append(p[i])
        if len(d[p[i]]) >= k:
            b[p[i]] = i
    else:
        o.pop(xi)
        d[p[i]] = d[mi] + [p[i]]
        if len(d[p[i]]) >= k:
            for w in d[p[i]]:
                b[w] = i
        else:
            o.append(p[i])

for i in range(1, n + 1):
    if b[i] == -1:
        print(-1)
    else:
        print(b[i] + 1)


