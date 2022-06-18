# for _ in range(int(input())):
n = int(input())
rem = n%4
if (rem==0 or rem==3):
    print(0)
else:
    print(1)
print(n//2, end= ' ')

if rem==2:
    print(1, end= ' ')
elif rem==3:
    print(3, end= ' ')

for i in range(rem+1,n+1,4):
    print(i,end=' ')
    print(i+3,end=' ')
print()