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

void solve()
{
    int n,k;
    cin >> n >> k;
    vi arr(n);
    vi good(n-1);
    for (int i = 0; i <n; i++){
        cin >> arr[i];
        if (i!=0) good[i-1]=(int)(arr[i-1]<2*arr[i]);
    }
    int wsum=0;
    for (int i=0; i<k; i++) wsum+=good[i];
    int ans=(wsum==k)?1:0;

    for (int i=0; i<=n-2-k; i++){
        wsum-=good[i];
        wsum+=good[i+k];
        ans += (wsum==k)?1:0;
    }
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