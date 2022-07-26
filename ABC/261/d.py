import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n, m = LI()

x = LI()

dp = [[0]*(n+1) for _ in range(n+1)]


d = collections.defaultdict(int)
for _ in range(m):
    q = LI()
    d[q[0]] = q[1]

for i in range(n):
    dp[i + 1][0] = max(dp[i])
    for j in range(1, i + 2):
        dp[i + 1][j] = dp[i][j - 1] + x[i] + d[j]
print(max(dp[n]))