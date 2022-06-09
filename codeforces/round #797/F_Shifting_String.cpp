#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll rep(string s){
    ll r=0;
    string og = s;
    while (1){
        reverse(s.begin(), s.end()-1);
        reverse(s.begin(), s.end());
        r++;
        if (og==s) break;
    }
    return r;
}

ll lcm(vector<ll> arr){
    if (arr.size() == 1) return arr[0];
    
    ll lcm = arr[0]*arr[1]/__gcd(arr[0],arr[1]);
    for (int i=2; i<arr.size(); i++){
        lcm = lcm*arr[i] / __gcd(arr[i],lcm);
    }
    return lcm;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    ll t;
    cin >> t;
    while(t--){

        ll n; cin >> n;
        string s; cin >> s;

        vector<int> perm(n);
        for (int i=0; i<n; i++) {
            cin >> perm[i];
            perm[i]--;
        }

        vector<ll> reps;

        vector<bool> visited(n,false);
        for (int i=0; i<n; i++){
            if (visited[i]) continue;
            
            string cycle="";
            for (int t=i; (t!=i || visited[i]==false); t=perm[t]){
                visited[t] = true;
                cycle += s[t];
            }
            reps.push_back(rep(cycle));

        }
        cout << lcm(reps) << endl;
        
    }
    return 0;
}