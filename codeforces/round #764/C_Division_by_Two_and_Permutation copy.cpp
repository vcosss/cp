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
        bool check[n] = {false};
        for (int i=0; i<n; i++){

            int ele; cin >> ele;
            while (ele > n)
                ele = ele/2;

            while (check[ele] && ele!=1)
                ele = ele/2;
    
            check[ele] = true;
        }

        bool res = true;
        for (int i=1; i<n+1; i++){
            if (!check[i]){
                res = false;
                break;
            }
        }
        cout << (res ? "YES" : "NO") << endl;
    }
    return 0;
}