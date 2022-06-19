'''You are given two positive integers A and B. Find the number of pairs
of positive integers (X,Y) such that 1≤X≤A, 1≤Y≤B and X+Y is even.

Input The first line of the input contains a single integer T denoting
the number of test cases. The description of T test cases follows. The
first and only line of each test case contains two space-separated
integers A and B. Output For each test case, print a single line
containing one integer ― the number of valid pairs.

Constraints
1≤T≤1,000
1≤A,B≤10^9
Subtasks
Subtask #1 (10 points): A,B≤10
Subtask #2 (10 points): A,B≤1,000
Subtask #3 (80 points): original constraints

Example Input
4
1 1
2 3
4 6
8 9
Example Output
1
3
12
36
'''

t=int(input())
a,b=[],[]
for y in range(t):
    x=input()
    s=x.split(' ')
    a.append(int(s[0]))
    b.append(int(s[1]))

def nodd(x): #no of odd numbers from 1 to x
    if x%2==0:
        return int(x/2)
    else:
        return int((x+1)/2)

def neven(x): #no of even numbers from 1 to x
    if x%2==0:
        return int(x/2)
    else:
        return int((x-1)/2)
    
for y in range(0,t):
    print((neven(a[y])*neven(b[y]))+(nodd(a[y])*nodd(b[y])))
