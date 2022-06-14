def palin(h,m):
    s = f"{str(h).zfill(2)}:{str(m).zfill(2)}"
    if s[0]==s[4] and s[1]==s[3]:
        return True
    else:
        return False

t = int(input())
for _ in range(t):
    time,x = input().split()
    ih,im = map(int,time.split(':'))
    x=int(x)
    h,m = ih,im

    palins=[]
    ans = 0
    while True:
        # print(h,m)
        m+=x
        h+= m//60
        m%=60
        h%=24
        if palin(h,m):
            if (h,m) not in palins:
                palins.append((h,m))
        if h==ih and m==im:
            break
    print(len(palins))