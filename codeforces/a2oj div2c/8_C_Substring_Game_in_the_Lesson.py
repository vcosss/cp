s = input()
minc = chr(ord('z')+1)
for k in range(len(s)):
    winner = "Ann"
    if s[k]<=minc:
        minc=s[k]
        winner = "Mike"
    print(winner)
    