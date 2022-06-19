t = int(input())
res ={1:2, 2:2, 3:1, 4:0}
for y in range(t):
    diff = list(map(int, input().split()))
    dis = len(set(diff))
    if dis == 4 or dis == 3:
        print(2)
    elif dis == 2:
        diff.sort()
        if diff[1] != diff[2]:
            print(2)
        else:
            print(1)
    else:
        print(0)