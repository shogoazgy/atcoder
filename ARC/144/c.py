import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n, k = LI()

ans = []
ii = 1
for i in range(1, n + 1):
    if i - ii >= k:
        ans.append(str(ii))
        ii += 1
    elif i + k <= n:
        ans.append(str(i + k))
    else:
        print(-1)
        sys.exit()

print(' '.join(ans))