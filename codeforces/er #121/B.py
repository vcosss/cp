for t in range(int(input())):
    s = input()
    n = -1
    for i in range(len(s)-1):
        n = max(n, int(s[:i] + str(int(s[i])+int(s[i+1])) + s[i+2:]))
    print(n)