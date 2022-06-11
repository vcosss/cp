#include<bits/stdc++.h>
using namespace std;

int man(int x1, int y1, int x2, int y2){
    return abs(x1-x2)+abs(y1-y2);
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 
    
    int t;
    cin>>t;
    while(t--){

        int n,m;
        cin >> n >> m;

        pair<int,int> x={INT_MAX,INT_MIN};
        pair<int,int> y={INT_MAX,INT_MIN};

        vector<string> mat(n);
        pair<int,int> e1={n-1,m-1},e2={n-1,0},e3={0,m-1},e4={0,0};

        for (int i=0; i<n; i++){
            cin >> mat[i];
            for (int j=0; j<mat[i].size(); j++){
                if (mat[i][j]=='B'){
                    if (i+j < e1.first+e1.second) e1={i,j};
                    if (i-j < e2.first-e2.second) e2={i,j};
                    if (i-j > e3.first-e3.second) e3={i,j};
                    if (i+j > e4.first+e4.second) e4={i,j};
                }
            }
        }
        vector<pair<int,int>> extremes = {e1,e2,e3,e4};

        pair<int,int> ans;
        int minmaxman = INT_MAX;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                int maxman = INT_MIN;
                for (pair<int,int> e:extremes){
                    maxman = max(maxman, man(i,j,e.first,e.second));
                }
                if (maxman < minmaxman){
                    minmaxman = maxman;
                    ans = {i,j};
                }
            }
        }

        cout << ans.first+1 << " " << ans.second+1 << endl;
    }
    return 0;
}