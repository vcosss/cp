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
    int n; cin>>n;
    int k; cin>>k;
    vi a(n),b(n);
    vector<pii> diff(n);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++){
        cin >> b[i];
        diff[i]={a[i]-b[i],i};
    }
    sort(diff.begin(), diff.end());
    int cost=0;
    for (int i=0; i<k; i++)cost+=a[diff[i].second];
    for (int i=k; i<n; i++)cost+=min(a[diff[i].second],b[diff[i].second]);
    cout << cost << endl;
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