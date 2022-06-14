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

char q1(int i){
    cout << "? 1 " << i+1 << endl << flush;
    char c; cin >> c;
    return c;
}

int q2(int l, int r){
    cout << "? 2 " << l+1 << " " << r+1 << endl << flush;
    int c; cin >> c;
    return c;
}

void solve()
{
    int n; cin >> n;
    string s="";

    vi prev;
    for (int i = 0; i < n; i++){
        if (prev.empty() ? true : q2(prev.front(),i)==prev.size()+1){      // new char
            s += q1(i);
            prev.push_back(i);
        }
        else{       // prev char
            int j=0;
            int p=prev.size();
            // binary search new style
            for (int b=p/2; b>=1; b/=2){
                while ( j+b<p && q2(prev[j+b],i)!=(p+1-(j+b)) ) j+=b;
            }   
            s += s[prev[j]];
            prev.erase(prev.begin()+j);
            prev.push_back(i);
        }
    }

    cout << "! " << s << endl << flush;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    solve();
    return 0;
}