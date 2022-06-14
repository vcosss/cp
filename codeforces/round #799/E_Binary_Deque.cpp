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
    int n,s;
    cin >> n >> s;
    vi arr(n,0);
    int total=0;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        if (arr[i]==1) total++;
    }
    if (total<s){
        cout << -1 << endl;
        return;
    }
    else if (total==s){
        cout << 0 << endl;
        return;
    }

    int c1=0;
    int l=0;
    int r=0;
    while (1){
        if (arr[r]==1) c1++;
        if (c1>s) {
            r--;
            break;
        }
        r++;
    }

    int maxlen=r-l+1;
    while (r<n-1){
        //left
        while(arr[l]!=1) l++;
        l++;
        //right
        r++; // safe
        while(r+1<n && arr[r+1]!=1){
            r++;
        }

        maxlen = max(maxlen,r-l+1);
    }


    cout << n-maxlen << endl;
    // cout << l << " " << r << endl;
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