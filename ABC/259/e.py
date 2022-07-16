import bisect,collections,copy,heapq,itertools,math,string
import sys
sys.setrecursionlimit(10**7)
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n = I()
a = [[] for _ in range(n)]
for i in range(n):
    m = I()
    for _ in range(m):
        x = LI()
        for y in x:
            a[i].append(y)
