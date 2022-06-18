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

bool testcases = 1;

void solve()
{
    int n; cin >> n;
    vi s(n);
    int min1= INT_MAX;
    int bla=0;
    for (int i=0; i<n; i++){
        cin >> s[i];
        if (s[i]<min1){
            min1 = s[i];
            bla = i;
        }
    }
    if (n%2!=0) cout << "Mike" << endl;
    else{
        if (bla%2==0) cout << "Joe" << endl;
        else cout << "Mike" << endl;
    }

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