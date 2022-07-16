import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n, a, b = LI()
x = LI()
x = sorted(x)

def ok(t):
    m = 0
    p = 0
    for i in x:
        if i < t:
            m += math.ceil((t - i) / a)
        else:
            p += (i - t) // b
    if p >= m:
        return True
    else:
        return False

left = x[0]
right = x[n-1]

while right - left > 1:
    mid = (left + right) // 2
    #print(mid)
    if ok(mid):
        left = mid
        #print('ok')
    else:
        right = mid
        #print('ng')
print(left)
