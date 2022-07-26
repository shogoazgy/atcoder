import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

l1, r1, l2, r2 = LI()
x = min(r1, r2) - max(l1, l2)
if x >= 0:
    print(x)
else:
    print(0)