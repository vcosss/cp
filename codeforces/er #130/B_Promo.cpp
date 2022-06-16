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

ll n,q;
ll bla;
vll p;
vll cs;

void solve()
{
    ll x,y;
    cin >> x >> y;
    cout << cs[x-y]-cs[x] << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    cin>>n>>q;
    for (ll i=0; i<n; i++){
        cin >> bla;
        p.push_back(bla);
    }
    sort(p.begin(),p.end());
    for (ll i=0; i<n; i++){
        cs.push_back(i==0 ? p[i] : cs[i-1]+p[i]);
    }
    reverse(cs.begin(),cs.end());
    cs.push_back(0);

    while(q--){
        solve();
    }
    return 0;
}