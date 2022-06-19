import sys

def q1(i):
    print("? 1",i+1,end='\n')
    sys.stdout.flush()
    return input()

def q2(l,r):
    print("? 2",l+1,r+1,end='\n')
    sys.stdout.flush()
    return int(input())

n = int(input())
prev = []
s = ['.']*n
s[0] = q1(0)
prev.append(0)
for i in range(1,n):
    ind = -1
    jump = (len(prev)//2)+1
    while (jump>=1):
        pot = ind+jump
        while (pot < len(prev) and q2(prev[pot],i) < len(prev)-(pot)+1):
            ind = pot
        jump //= 2
    if (ind == -1):
        s[i] = q1(i)
        prev.append(i)
    else:
        s[i] = s[prev[ind]]
        prev.pop(ind)
        prev.append(i)
print("!","".join(s),end='\n')
sys.stdout.flush()
