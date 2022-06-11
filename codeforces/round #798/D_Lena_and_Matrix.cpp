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
        for (int i=0; i<n; i++){
            cin >> mat[i];
            for (int j=0; j<mat[i].size(); j++){
                if (mat[i][j]=='B'){
                    x.first = min(x.first,j);
                    x.second = max(x.second,j);
                    y.first = min(y.first,i);
                    y.second = max(y.second,i);
                }
            }
        }

        int a1 = floor((double)(y.first + y.second)/2);
        int a2 = ceil((double)(y.first + y.second)/2);
        int b1 = floor((double)(x.first + x.second)/2);
        int b2 = ceil((double)(x.first + x.second)/2);

        vector<pair<int,int>> options = {{a1,b1},{a1,b2},{a2,b1},{a2,b2}};
        vector<pair<int,int>> extremes;
        if (mat[y.first][x.first]=='B') extremes.push_back({y.first,x.first});
        if (mat[y.first][x.second]=='B') extremes.push_back({y.first,x.second});
        if (mat[y.second][x.first]=='B') extremes.push_back({y.second,x.first});
        if (mat[y.second][x.second]=='B') extremes.push_back({y.second,x.second});

        pair<int,int> ans;
        int minmaxman = INT_MAX;
        for (pair<int,int> i:options){
            int maxman = INT_MIN;
            for (pair<int,int> j:extremes){
                maxman = max(maxman, man(i.first,i.second,j.first,j.second));
            }
x            if (maxman < minmaxman){
                minmaxman = maxman;
                ans = i;
            }
        }

        cout << ans.first+1 << " " << ans.second+1 << endl;
    }
    return 0;
}