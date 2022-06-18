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

vector<vi> grid(1000,vi(1000,0));
vector<vi> max1(1000,vi(1000,0));
vector<vi> min1(1000,vi(1000,0));

int n,m;

bool check(int i=0, int j=0, int sum=0){
    if (sum%2==0 && (n-i+m-j-1)%2!=0) return false;
    if (sum%2!=0 && (n-i+m-j-1)%2==0) return false;

    // if (abs(sum)>(n-i+m-j-1)) return false;
    if (sum+min1[i][j]>0) return false;
    if (sum+max1[i][j]<0) return false;
    
    if (i==n-1 && j==m-1){
        if (sum+grid[i][j]==0) return true;
        else return false;
    }
    else if (i==n-1) return check(i,j+1,sum+grid[i][j]);
    else if (j==m-1) return check(i+1,j,sum+grid[i][j]);
    else{
        return check(i+1,j,sum+grid[i][j]) or check(i,j+1,sum+grid[i][j]);
    }
}

void solve()
{   
    cin >> n >> m;
    for (int i = 0; i <n; i++){
        for (int j = 0; j<m; j++){
            cin >> grid[i][j];
        }
    }
    for (int i=n-1; i>=0; i--){
        for (int j = m-1; j>=0; j--){
            if (i==n-1 && j==m-1){
                max1[i][j]=grid[i][j];
                min1[i][j]=grid[i][j];
            }
            else if (i==n-1){
                max1[i][j]=max1[i][j+1]+grid[i][j];
                min1[i][j]=min1[i][j+1]+grid[i][j];
            }
            else if (j==m-1){
                max1[i][j]=max1[i+1][j]+grid[i][j];
                min1[i][j]=min1[i+1][j]+grid[i][j];
            }
            else{
                max1[i][j]=max(max1[i+1][j],max1[i][j+1]) + grid[i][j];
                min1[i][j]=min(min1[i+1][j],min1[i][j+1]) + grid[i][j];
            }
        }
    }

    if (n==1 && m==1) na;
    else if (check()) ya;
    else na;

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