import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n, x, y = LI()

red = [n, 1]
if n == 1:
    print(0)
    sys.exit()
bleu = []
while True:
    if len(bleu) == 0:
        bleu.append(red[0])
        bleu.append(red[1] * x)
        red[0] = red[0] - 1
    else:
        bleu[1] = bleu[1] + (red[1]*x)
        red[0] = red[0] - 1
    red[1] = red[1] + bleu[1]
    bleu[0] = bleu[0] - 1
    bleu[1] = bleu[1] * y
    if bleu[0] == 1:
        #print(red)
        #print(bleu)
        break
print(bleu[1])

