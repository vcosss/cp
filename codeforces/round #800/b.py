for _ in range(int(input())):
    n = int(input())
    s = input()
    ans=1
    for i in range(2,len(s)+1):
        if s[i-2]==s[i-1]:
            ans+=1
        else:
            ans+=i
    print(ans)