n = int(input())
groups = []
for i in range(n):
    groups.append(list())
right = True
ind = 0
for i in range(1,(n*n)+1):
    groups[ind].append(i)
    if right:
        ind += 1
        if ind == n:
            right = False
            ind -= 1
    else:
        ind -= 1
        if ind == -1:
            right = True
            ind += 1
for i in range(n):
    for j in range(n):
        print(groups[i][j],end=" ")
    print()