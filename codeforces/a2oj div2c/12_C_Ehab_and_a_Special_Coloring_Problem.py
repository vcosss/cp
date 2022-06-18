n = int(input())
primes = []
for i in range(2,n+1):
    for j in range(len(primes)):
        if i%primes[j]==0:
            print(j+1,end=' ')
            break
    else:
        primes.append(i)
        print(len(primes),end=' ')
