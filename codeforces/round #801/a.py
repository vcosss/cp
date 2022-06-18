for _ in range(int(input())):
    n,m = map(int,input().split())
    h1,w1=0,0
    max1=None
    for h in range(n):
        s = list(map(int,input().split()))
        for w in range(m):
            if max1 is None:
                max1 = s[w]
            if s[w]>max1:
                max1=s[w]
                h1 = h
                w1 = w
    h1+=1
    w1+=1
    print(max(h1*w1,(n-h1+1)*(m-w1+1),(n-h1+1)*w1,h1*(m-w1+1)))
    