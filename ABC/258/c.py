import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

def rotate(a,n):
    return ''.join([a[-n:], a[:-n]])

n, q = LI()
s = S()

p = 0
for _ in range(q):
    t, x = LI()
    if t == 1:
        p -= x
        if p < 0:
            p += n
    else:
        i = p + x - 1
        if i >= n:
            i -= n
        print(s[i])
