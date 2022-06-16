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
    int n; cin >> n;
    vi arr(n);
    int ans=0;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        ans += pow(arr[i],2);
    }
    sort(arr.begin(), arr.end());
    for (int i=n/2; i<n; i++){
        ans += 2*(arr[i]*arr[n-i-1]);
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0); 

  
    solve();
    return 0;
}