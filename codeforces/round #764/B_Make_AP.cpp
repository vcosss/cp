#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    cin>>t;
    while(t--){

        int a,b,c;
        cin >> a >> b >> c;
        if (2*b == a+c){
            cout << "YES" << endl;
        }
        else if (2*b < a+c){
            if ((a+c-2*b)%2!=0){
                cout << "NO" << endl;
            }
            else if (((a+c-2*b)/2)%b==0){
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if (2*b > a+c){
            if ((2*b-a-c)%a==0 || (2*b-a-c)%c==0){
                cout << "YES" << endl;
            }
            else 
                cout << "NO" << endl;
        }

    }
    return 0;
}