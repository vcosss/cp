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
        int max1 = INT_MIN;
        int min1 = INT_MAX;
        for (int i=0; i<n; i++){
            int a; cin >> a;
            max1 = max(max1, a);
            min1 = min(min1, a);
        }
        cout << max1-min1 << endl;

    }
    return 0;
}