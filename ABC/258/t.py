import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n = I()
a = []
b = []

for _ in range(n):
    x, y = LI()
    a.append(x)
    b.append(y)
a_min = min(a)
a_min_index = [i for i, x in enumerate(a) if x == a_min]
b_min = min(b)
b_min_index = [i for i, x in enumerate(b) if x == b_min]

if len(a_min_index) >= 2 or len(b_min_index) >= 2:
    print(max(a_min, b_min))
else:
    if a_min_index[0] == b_min_index[0]:
        a.remove(a_min)
        b.remove(b_min)
        print(min(max(min(a), b_min), max(min(b), a_min), a_min + b_min))
    else:
        print(max(a_min, b_min))

