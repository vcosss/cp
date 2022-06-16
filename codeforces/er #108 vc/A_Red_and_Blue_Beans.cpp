#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    cin>>t;
    while(t--){

        int r,b,d;
        cin >> r >> b >> d;

        if (max(r,b)/min(r,b)+(max(r,b)%min(r,b)==0 ? 0 : 1)-1 <= d){
            cout << "YES" << endl;
        }
        else 
            cout << "NO" << endl;

    }
    return 0;
}