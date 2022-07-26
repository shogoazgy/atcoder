import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n, x, y, z = LI()
a = LI()
b = LI()

p = range(n)
ans = []
a = [[a[i], -i] for i in range(n)]
b = [[b[i], -i] for i in range(n)]
a_sorted = sorted(a)
for i in range(x):
    ans.append(a_sorted[n - i - 1][1])

set_ans = set(ans)
a_n = []
b_n = []

for i in range(n):
    if -i not in set_ans:
        a_n.append(a[i])
        b_n.append(b[i])

b_n_sorted = sorted(b_n)
for i in range(y):
    ans.append(b_n_sorted[len(b_n) - i - 1][1])

a_nn = []
b_nn = []
set_ans = set(ans)
for i in range(n):
    if -i not in set_ans:
        a_nn.append(a[i])
        b_nn.append(b[i])
q = []
for i in range(len(a_nn)):
    q.append([a_nn[i][0] + b_nn[i][0], a_nn[i][1]])

q_sorted = sorted(q)
for i in range(z):
    ans.append(q_sorted[len(q) - i - 1][1])

ans_sorted = sorted(ans, reverse=True)

for i in range(len(ans_sorted)):
    print(-ans_sorted[i] + 1)
    



