for t in range(int(input())):

    n = int(input())
    uni = list(map(int,input().split()))
    skill = list(map(int,input().split()))

    unis = max(uni)
    uni1 = [[] for i in range(unis)]
    for i in range(n):
        uni1[uni[i]-1].append(skill[i])
    for l in uni1:
        l.sort(reverse=True)
    
    for k in range(1,n+1):
        stren = 0
        for u in uni1:
            stren += sum(u[:k*(len(u)//k)])
        print(stren, end=' ')
    print()



