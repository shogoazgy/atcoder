import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n, k, q = LI()
a = LI()
l = LI()
x = [0] * n
for i in range(k):
    a[i] -= 1
for i in range(q):
    l[i] -= 1
for i in a:
    x[i] = 1
for i in l:
    if a[i] < n - 1 and x[a[i] + 1] == 0:
        x[a[i] + 1] = 1
        x[a[i]] = 0
        a[i] += 1
a = [str(i + 1) for i in a]
print(' '.join(a))

