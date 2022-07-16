import bisect,collections,copy,heapq,itertools,math,string
import sys
sys.setrecursionlimit(10**7)
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

def DFS(G, v):
    seen[v] = True
    for next_v in range(len(G[v])):
        if seen[G[v][next_v]]:
            continue
        DFS(G, G[v][next_v])

n = I()
st = LI()
w = []
for i in range(n):
    w.append(LI())

#b = [[0] * n for i in range(n)]
b = [[] for _ in range(n)]
for i in range(n):
    for j in range(n):
        if i == j:
            continue
        c1 = w[i]
        c2 = w[j]
        c_d = (c1[0]-c2[0]) * (c1[0]-c2[0]) + (c1[1]-c2[1]) * (c1[1]-c2[1])
        r_s = c1[2] + c2[2]
        if (c1[2] - c2[2]) * (c1[2] - c2[2]) <= c_d and (c1[2] + c2[2]) * (c1[2] + c2[2]) >= c_d:
            b[i].append(j)
            b[j].append(i)
s_c = []
e_c = []

for i in range(n):
    c = w[i]
    if (st[0] - c[0]) * (st[0] - c[0]) + (st[1] - c[1]) * (st[1] - c[1]) == c[2] * c[2]:
        s_c.append(i)
    if (st[2] - c[0]) * (st[2] - c[0]) + (st[3] - c[1]) * (st[3] - c[1]) == c[2] * c[2]:
        e_c.append(i)
#print(s_c)
#print(e_c)
for s in s_c:
    seen = [False for i in range(n)]
    DFS(b, s)
    #print(seen)
    for i in range(n):
        if seen[i] == True:
            if i in e_c:
                print('Yes')
                sys.exit()
print('No')
