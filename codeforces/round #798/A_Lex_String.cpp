#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    cin>>t;
    while(t--){

        int n,m,k;
        cin >> n >> m >> k;
        string a,b;
        cin >> a >> b;

        string c="";
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ka=0,kb=0;

        while (a.size()!=0 && b.size()!=0){
            if (ka<k && kb<k){
                if (a[0]<b[0]){
                    c += a[0];
                    a.erase(0,1);
                    ka++;
                    kb=0;
                }
                else{
                    c += b[0];
                    b.erase(0,1);
                    kb++;
                    ka=0;
                }
            }
            else if (ka>=k && kb<k){
                c += b[0];
                b.erase(0,1);
                kb++;
                ka=0;
            }
            else if (kb>=k && ka<k) {
                c += a[0];
                a.erase(0,1);
                ka++;
                kb=0;
            }
        }
        cout << c << endl;

    }
    return 0;
}