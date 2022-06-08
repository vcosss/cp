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
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int diff = 0;
        for (int i=0; i<n; i++){
            cin >> b[i];
            diff = max(diff,a[i] - b[i]);
            if (diff<0){
                cout << "NO" << "\n";
                return 0;
            }
        }

        int i = 0;
        for (i=0; i<n; i++){
            if (b[i]==0 ? ((a[i] - b[i]) > diff) : ((a[i] - b[i]) != diff)){
                cout << "NO" << "\n";
                break;
            }
        }
        if (i==n) cout << "YES" << "\n";

    }
    return 0;
}