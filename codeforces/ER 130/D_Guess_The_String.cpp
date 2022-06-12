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


int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int n;
    cin>>n;
    int unk=n;
    vector<char> s(n,'0');
    char c;
    int tmp;

    if (n<=26){
        for (int i=0;i<n;i++){
            cout<< "? "<<1<<" "<<i+1<<endl<<flush;
            cin >> s[i];
        }
    }
    else{
        cout<< "? 1 2"<<endl<<flush;
        cin >> s[1];
        cout<<"? 2 1 2"<<endl<<flush;
        cin >> tmp;
        if (tmp==1) s[0]=s[1];
        else{
            cout<< "? 1 1"<<endl<<flush;
            cin >> s[0];
        }
        int i =2;
        while(i<n){
            cout<<"? 2 "<<i<<" "<<i+1<<endl<<flush;
            cin >> tmp;
            if (tmp==1){
                s[i]=s[i-1];
            }
            else{
                cout<<"? 1 "<<i+1<<endl<<flush;
                cin >> s[i];
            }
            i++;
        }
    }

    cout << "! ";
    for (int i=0; i<n; i++){
        cout << s[i];
    } cout << endl;

    return 0;
}