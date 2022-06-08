for t in range(int(input())):
    s = input()
    count = {}
    for i in s:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1
    for i in count:
        print(i*count[i],end='')
    print()