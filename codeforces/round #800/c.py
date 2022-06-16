for _ in range(int(input())):
    ans = True
    n = int(input())
    a = list(map(int,input().split()))

    target=[]
    for i in range(len(a)):
        if  i==0:
            target.append(a[i])
        else:
            target.append(a[i]+1)
    
    khoda = [0]
    plus = [target[0]]

    last = False
    for i in range(1,len(a)):
        khoda.append(-1*(plus[i-1]-1))
        plus.append(target[i]-khoda[i])
        
        if plus[i]<0:
            ans = False
            break
        if last:
            if plus[i]!=0:
                ans = False
                break
        if plus[i]==0:
            last = True
            continue

    if khoda[-1]!=target[-1]:
        ans = False

    print("Yes" if ans else "No")