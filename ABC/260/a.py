import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

s = S()
f = 0
if s[0] != s[1] and s[0] != s[2]:
    f = 1
    print(s[0])
elif s[1] != s[0] and s[1] != s[2]:
    f = 1
    print(s[1])
elif s[2] != s[0] and s[2] != s[1]:
    f = 1
    print(s[2])
if not f:
    print(-1)