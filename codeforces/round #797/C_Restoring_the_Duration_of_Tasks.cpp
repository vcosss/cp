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
        vector<int> a(n,0);
        vector<int> f(n,0);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> f[i];
        }

        vector<int> s(n,0);
        s[0] = a[0];
        for (int i = 1; i < n; i++){
            if (a[i] >= f[i-1]){
                s[i] = a[i];
            }
            else{
                s[i] = f[i-1];
            }
        }

        for (int i = 0; i < n; i++){
            cout << f[i]-s[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}