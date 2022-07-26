import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n = I()
d = collections.defaultdict(int)
x = set()
for _ in range(n):
    s = S()
    if s in x:
        d[s] += 1
        print(''.join([s, '(', str(d[s]), ')']))
    else:
        x.add(s)
        print(s)
 
