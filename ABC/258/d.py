import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n, x = LI()

ans = float('inf')

sum = 0

for _ in range(n):
    a, b = LI()
    if x <= 1:
        ans = min(ans, sum + a)
        break
    sum += a + b
    x -= 1
    ans = min(ans, sum + x*b)
print(ans)