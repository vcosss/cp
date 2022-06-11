#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    cin>>t;
    while(t--){

        int n; cin >> n;
        vector<int> perm(n);
        for (int i=0; i<n; i++){
            cin >> perm[i];
            perm[i]--;
        }

        if (n<=1){
            cout << -1 << endl;
            continue;
        }

        vector<int> mystic(n);
        int i=0;
        while (i<n){
            if (perm[i]!=i){
                if (i+1==n-1 && perm[i+1]==n-1){
                    mystic[i]=i+1;
                    mystic[i+1]=i;
                    i+=2;
                }
                else{
                    mystic[i]=i;
                    i++;
                }
            }
            else{
                mystic[i]=i+1;
                if (i+2==n-1 && perm[i+2]==n-1){
                    mystic[i+1]=i+2;
                    mystic[i+2]=i;
                    i+=3;
                }
                else{
                    mystic[i+1]=i;
                    i+=2;
                }
            }
        }
        for (int x:mystic){
            cout << x+1 << " ";
        }
        cout << endl;

    }
    return 0;
}