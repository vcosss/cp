''' Increasing COVID cases have created panic amongst the people of
Chefland, so the government is starting to push for production of a
vaccine. It has to report to the media about the exact date when
vaccines will be available.

There are two companies which are producing vaccines for COVID. Company
A starts producing vaccines on day D1 and it can produce V1 vaccines per
day. Company B starts producing vaccines on day D2 and it can produce V2
vaccines per day. Currently, we are on day 1.

We need a total of P vaccines. How many days are required to produce
enough vaccines? Formally, find the smallest integer d such that we have
enough vaccines at the end of the day d.

Input The first and only line of the input contains five space-separated
integers D1, V1, D2, V2 and P. Output Print a single line containing one
integer ― the smallest required number of days.

Constraints
1≤D1,V1,D2,V2≤100
1≤P≤1,000

Subtasks
Subtask #1 (30 points): D1=D2=1
Subtask #2 (70 points): original constraints

Example Input 1
1 2 1 3 14
Example Output 1
3
Explanation
Since D1=D2=1, we can produce V1+V2=5 vaccines per day. In 3 days, we
produce 15 vaccines, which satisfies our requirement of 14 vaccines.

Example Input 2
5 4 2 10 100
Example Output 2
9
Explanation
There are 0 vaccines produced on the first day, 10 vaccines produced on
each of days 2, 3 and 4, and 14 vaccines produced on the fifth and each
subsequent day. In 9 days, it makes a total of 0+10⋅3+14⋅5=100 vaccines.'''

x = input()
s = x.split(' ')
d1,v1,d2,v2,p = int(s[0]),int(s[1]),int(s[2]),int(s[3]),int(s[4])
day,vp = 0,0 #vaccines produced
while vp<p:
    day += 1
    if day >= d1:
        vp += v1
    if day >=d2:
        vp += v2
print(day)
