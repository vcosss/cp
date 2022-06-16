for _ in range(int(input())):
    a,b = map(int,input().split())
    s =""
    while(a+b>0):
        if b>a:
            if b>0:
                b-=1
                s+="1"
            if a>0:
                a-=1
                s+="0"
        else:
            if a>0:
                a-=1
                s+="0"
            if b>0:
                b-=1
                s+="1"
    print(s)