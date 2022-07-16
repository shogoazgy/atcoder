import bisect,collections,copy,heapq,itertools,math,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

s = S()
t = S()
st = []
tt = []
pc = ''
pcs = []
for i in range(len(s)):
    if i == 0:
        pcs.append(s[0])
        pc = s[0]
    elif s[i] == pc:
        pcs.append(s[i])
    else:
        st.append(''.join(pcs))
        pc = s[i]
        pcs = []
        pcs.append(s[i])
st.append(''.join(pcs))
pc = ''
pcs = []
for i in range(len(t)):
    if i == 0:
        pcs.append(t[0])
        pc = t[0]
    elif t[i] == pc:
        pcs.append(t[i])
    else:
        tt.append(''.join(pcs))
        pc = t[i]
        pcs = []
        pcs.append(t[i])
tt.append(''.join(pcs))
#print(st)
#print(tt)
if len(st) != len(tt):
    print('No')
else:
    f = 0
    for i in range(len(st)):
        if st[i] == tt[i]:
            pass
        elif len(st[i]) >= 2 and len(tt[i]) >= 2 and st[i][0] == tt[i][0] and len(st[i]) < len(tt[i]):
            pass
        else:
            f = 1
            break
    if f:
        print('No')
    else:
        print('Yes')