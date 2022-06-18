s = input()
k = int(input())
chars=0
cane,snow=False,False
for i in s:
    if i=='?':
        cane=True
        chars+=1
    elif i=='*':
        snow=True
        chars+=1
curl = len(s)-chars*2

if curl>k or (k>len(s)-chars and snow==False):
    print("Impossible")
else:
    s1=""
    req = k-curl
    extra = max(0,req-chars)
    for i in range(len(s)-1):
        if s[i]=='?' or s[i]=='*':
            pass
        elif s[i+1]!='*' and s[i+1]!='?':
            s1+=s[i]
        elif req>0:
            if s[i+1]=='?':
                s1+=s[i]
                req-=1
            else:
                s1+=s[i]*(1+extra)
                req-=(1+extra)
                extra=0

    if s[-1]!='*' and s[-1]!='?':
        s1+=s[-1]
    print(s1)