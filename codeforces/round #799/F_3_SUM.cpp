#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef long long ll;
typedef vector<int> vi;
typedef vector <long long> vll;
typedef vector <double> vd;
typedef pair<int,int> pi;
typedef map<int,int> mii;
typedef map<char,int> mci;

#define int long long

void solve()
{
    int n; cin >> n;
    vi count(10,0);
    for (int i = 0; i < n; i++){
        int bla; cin >> bla;
        count[bla%10]++;
    }

    for (int i=0; i<10;i++){
        for (int j=0; j<10;j++){
            for (int k=0; k<10;k++){
                if (i==j && i==k && count [i]<3) continue;
                if (i==j && count[i]<2) continue;
                if (j==k && count[j]<2) continue;
                if (k==i && count[i]<2) continue;
                if (count[i]<1 || count[j]<1 || count[k] <1) continue;
                if ((i+j+k)%10==3){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}