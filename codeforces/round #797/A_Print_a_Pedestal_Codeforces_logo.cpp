#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    cin>>t;
    while(t--){

        int n; cin >> n;
        int h1 = n/3;
        while (3*(h1-1) < n) h1++;
        int h2 = h1-1;
        int h3 = n-h1-h2;
        if (h3 <= 0){
            h3++;
            h2--;
        }
        cout << h2 << " " << h1 << " " << h3 << "\n";

    }
    return 0;
}