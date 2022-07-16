import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n = I()
m = 2 * n

x = int(n / 4)
y = n % 4

q = ''.join([str(4)] * x)
if y == 0:
    ans = q
else:
    ans = ''.join([str(y), q])
#ans = ''.join([y] + [''.join([str(4)] * x)])
print(m)
print(ans)
