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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int ans=0;
    if (b>a) ans++;
    if (c>a) ans++;
    if (d>a) ans++;
    cout << ans << endl;
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