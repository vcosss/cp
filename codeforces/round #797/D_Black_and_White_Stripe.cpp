#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;

        int b=0;
        for (int i=0; i<k; i++){
            if (s[i]=='B') b++;
        }
        int maxb = b;

        for (int i=0; i<n-k; i++){
            if (s[i]=='B') b--;
            if (s[i+k]=='B') b++;
            maxb = max(b,maxb);
        }

        cout << k-maxb << "\n";


    }
    return 0;
}