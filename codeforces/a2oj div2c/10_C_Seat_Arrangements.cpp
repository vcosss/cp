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
#define cins cin >> 
#define couts cout << 

bool testcases = 0;

void solve()
{
    int n,m,k;
    cins n>>m>>k;
    vector<string> mat(n);
    for (int i = 0; i < n; i++){
        cins mat[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l=0;
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j]=='.') l++;
            else if (mat[i][j]=='*'){
                ans += max(0LL,l-k+1);
                l=0;
            }
        }
        ans += max(0LL,l-k+1);
    }
    for (int j = 0; j < m; j++)
    {
        int l=0;
        for (int i = 0; i < n; i++)
        {
            if (mat[i][j]=='.') l++;
            else if (mat[i][j]=='*'){
                ans += max(0LL,l-k+1);
                l=0;
            }
        }
        ans += max(0LL,l-k+1);
    }
    if (k==1) ans/=2;
    cout << ans << endl;
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