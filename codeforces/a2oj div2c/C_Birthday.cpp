#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector <long long> vll;
typedef vector <double> vd;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef map<int,bool> mib;
typedef map<char,int> mci;

#define int long long
#define ya cout << "Yes\n"
#define na cout << "No\n"

bool testcases = 0;

void solve()
{
    int n; cin >> n;
    vi h(n);
    for (int i=0; i<n; i++) cin >> h[i];
    sort(h.begin(),h.end());
    for (int i=0; i<n; i+=2) cout << h[i] << " ";
    for (int i=(n%2==0 ? n-1 : n-2); i>0; i-=2) cout << h[i] << " ";
    cout << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    if (testcases) cin>>t;
    else t=1;
    
    while(t--){
        solve();
    }

    return 0;
}