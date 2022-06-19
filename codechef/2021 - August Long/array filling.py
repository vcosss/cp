for _ in range(int(input())):
    n,m = map(int,input().split())
    oper = {}
    for __ in range(m):
        x,y = map(int,input().split())
        if y in oper:
            if x > oper[y]:
                oper[y] = x
        else:
            oper[y] = x

    key,val = list(oper.keys()),list(oper.values())
    oper = {key[val.index(i)] : i for i in sorted(val,reverse=True)}
    
    sum = 0
    pos = n
    for i in oper:
        spots = pos - (pos//i)
        pos = pos//i
        sum += oper[i] * spots
    
    print(sum)
