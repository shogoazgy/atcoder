import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())


n = I()
a = [S() for _ in range(n)]
dy = [-1, -1, 0, 1, 1,  1 , 0  , -1]
dx = [ 0,  1, 1, 1, 0, -1 , -1 , -1]
ans = []
for i in range(n):
    for j in range(n):
        for d in range(8):
            # 8方向に探索
            t = ""
            for kk in range(n):
                y = (i + dy[d]*kk) % n
                x = (j + dx[d]*kk) % n
                t = t + a[y][x]
            ans.append(int(t))
print(max(ans))