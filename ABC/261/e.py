import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n, c = LI()

for _ in range(n):
    t, a = LI()
    if t == 1:
        c = c & a
    elif t == 2:
        c = c | a
    else:
        c = c ^ a
    print(c)
