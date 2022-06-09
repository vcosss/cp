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

        int w;
        long long cost=0;
        vector<int> remc(k,0);  // remainder count

        for (int i=0; i<n; i++){
            cin >> w;
            cost += w/k;
            remc[w%k]++;
        }

        int l=1,r=k-1;
        while (l<r || (l==r && remc[l]>1)){
            while (remc[r]==0 && l<r) {r--; l=max(l,k-r);}
            while (remc[l]==0 && l<r) {l++;}
            if (l<r || (l==r && remc[l]>1)){
                remc[r]--;
                remc[l]--;
                cost++; 
            } 
        }
        cout << cost << "\n";

    }
    return 0;
}