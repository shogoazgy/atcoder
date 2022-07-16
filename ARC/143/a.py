import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

a, b, c = LI()
if a == b and b == c:
    print(a)
else:
    c, b, a = sorted([a, b, c])
    if (a - c) > b:
        print(-1)
    else:
        print(a)
