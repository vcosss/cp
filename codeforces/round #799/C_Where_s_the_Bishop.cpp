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
    vector<string> board(8,"........");
    for (int i = 0; i < 8; i++){
        cin >> board[i];
    }
    pi ans = {0,0};
    for (int r=0;r<8;r++){
        vi atek;
        for (int c=0; c< 8; c++){
            if (board[r][c]=='#'){
                atek.push_back(c);
            }
        }
        if (atek.size()==2 && abs(atek[1]-atek[0])==2){
            ans.first = r+1;
            break;
        }
    }
    for (int c=0;c<8;c++){
        vi atek;
        for (int r=0; r<8; r++){
            if (board[r][c]=='#'){
                atek.push_back(r);
            }
        }
        if (atek.size()==2 && abs(atek[1]-atek[0])==2){
            ans.second = c+1;
            break;
        }
    }
    cout << ans.first+1 << " " << ans.second+1 << endl;
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