import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n = I()

a = []
for _ in range(n):
    x = S()
    y = []
    for i in range(n):
        y.append(x[i])
    a.append(y)

f = 0
for i in range(n):
    for j in range(n):
        if i == j:
            continue
        if a[i][j] == 'W' and a[j][i] == 'W':
            f = 1
            break
        if a[i][j] == 'W' and a[j][i] == 'D':
            f = 1
            break
        if a[i][j] == 'L' and a[j][i] == 'L':
            f = 1
            break
        if a[i][j] == 'L' and a[j][i] == 'D':
            f = 1
            break
        if a[i][j] == 'D' and a[j][i] == 'W':
            f = 1
            break
        if a[i][j] == 'D' and a[j][i] == 'L':
            f = 1
            break
if f:
    print('incorrect')
else:
    print('correct')