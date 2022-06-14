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
    map<int,int> m;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        m[a]++;
    }
    int bla=0;
    for (pair<int,int> p:m){
        if (p.second % 2==0) bla++;
    }
    if (bla%2==0) cout << m.size() << endl;
    else cout << m.size()-1 << endl;
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