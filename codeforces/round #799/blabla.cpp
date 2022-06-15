#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int a=9;
    string s1="Before addition: ";
    string s2="After addition: ";

    cout << s1 << a << endl;
    int b;
    cin >> b;
    a+=b;
    cout << s2 << a << endl;
    
    return 0;
}