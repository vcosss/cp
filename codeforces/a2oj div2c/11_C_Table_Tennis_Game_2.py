k,a,b = map(int, input().split())
if max(a,b)<k:
    print(-1)
elif min(a,b)<k and (max(a,b)%k!=0):
    print(-1)
else:
    print(a//k + b//k)