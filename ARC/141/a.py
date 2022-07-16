import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

t = I()

for _ in range(t):
    s = S()
    n = int(s)
    maxs = []
    for i in range(1, len(s)):
        if len(s) % i == 0:
            xs = s[:i]
            x = int(''.join([xs] * (int(len(s) / i))))
            #print(x)
            if x > n:
                maxs.append(int(''.join([str(int(xs) - 1)] * (int(len(s) / i)))))
            else:
                maxs.append(x)
        maxs.append(int(''.join(['9'] * (len(s) - 1))))
    print(max(maxs))




