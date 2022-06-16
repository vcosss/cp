for _ in range(int(input())):
    ans = True
    n = int(input())
    a = list(map(int,input().split()))

    bla1 = False

    diff = a
    op1 = [0]*n
    op2 = [0]*n
    for i in range(n-1,-1,-1):
        op1[i] = op2[i+1] if i!=n-1 else 0
        op2[i] = op1[i]-diff[i]

        if op1[i]<0 or op2[i]<0:
            ans = False
            break
        
        # condition for op1
        if bla1:
            if op1[i]==0:
                ans = False
                break
        if op1[i]>0:
            bla1 = True

        # condition for op2
        if i!=0 and op2[i]==0:
            if op1[i-1]!=0:
                ans = False
                break

    if op2[0]!=0:
        ans = False

    print("Yes" if ans else "No")