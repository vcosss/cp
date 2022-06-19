'''Finally, a COVID vaccine is out on the market and the Chefland
government has asked you to form a plan to distribute it to the public
as soon as possible. There are a total of N people with ages a1,a2,…,aN.

There is only one hospital where vaccination is done and it is only
possible to vaccinate up to D people per day. Anyone whose age is ≥80 or
≤9 is considered to be at risk. On each day, you may not vaccinate both
a person who is at risk and a person who is not at risk. Find the
smallest number of days needed to vaccinate everyone.

Input
The first line of the input contains a single integer T denoting
the number of test cases. The description of T test cases follows. The
first line of each test case contains two space-separated integers N and
D. The second line contains N space-separated integers a1,a2,…,aN.
Output For each test case, print a single line containing one integer ―
the smallest required number of days.

Constraints
1≤T≤10
1≤N≤10^4
1≤D≤10^5
1≤ai≤100 for each valid i
Subtasks
Subtask #1 (100 points): original constraints

Example Input
2
10 1
10 20 30 40 50 60 90 80 100 1
5 2
9 80 27 72 79
Example Output
10
3
Explanation
Example case 1:
We do not need to worry about how the people are grouped, since only one
person can be vaccinated in a single day. We require as many days as
there are people.

Example case 2:
There are two people at risk and three people who are not at risk. One
optimal strategy is tovaccinate the two people at risk on day 1 and the
remaining three on the next 2 days.'''

t = int(input())
n,d,loa = [],[],[]  #list of ages
for y in range(0,t):
    n1,d1 = input().split()
    loa.append(list(map(int,input().split())))
    n.append(int(n1))
    d.append(int(d1))

for y in range(0,t):
    day,ris = 0,0 #risky
    for x in loa[y]:
        if x>=80 or x<=9:
            ris += 1
    nor = n[y] - ris #normal
    day += nor//d[y]
    day += ris//d[y]
    if nor%d[y]!=0:
        day += 1
    if ris%d[y]!=0:
        day += 1
    print(day)