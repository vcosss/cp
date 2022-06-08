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
        if (2*k-1 > n) cout << -1 << "\n";
        else{
            for (int r=1; r<n+1; r++){
                for (int c=1; c<n+1; c++){
                    if (c==r && r%2!=0 && r<=2*k-1)
                        cout << 'R';
                    else
                        cout << '.';
                }
                cout << "\n";
            }
        }

    }
    return 0;
}