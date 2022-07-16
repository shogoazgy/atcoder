import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

a, b, d = LI()

def RotationMatrix(before_x,before_y,d):
    d = math.radians(d)
    new_x = before_x*math.cos(d)-before_y*math.sin(d)
    new_y = before_x*math.sin(d)+before_y*math.cos(d)
    return new_x,new_y
x, y = RotationMatrix(a, b, d)
print(x, y, sep=' ')
