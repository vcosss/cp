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


bool solve()
{
    ll n; cin >> n;
    string s,t;
    cin >> s >> t;

    vll counts(3,0);
    vll countt(3,0);
    for (int i = 0; i < n; i++){
        if (s[i]=='a') counts[0]++;
        else if (s[i]=='b') counts[1]++;
        else if (s[i]=='c') counts[2]++;
        if (t[i]=='a') countt[0]++;
        else if (t[i]=='b') countt[1]++;
        else if (t[i]=='c') countt[2]++;
    }
    if (!(counts[0]==countt[0] && counts[1]==countt[1] && counts[2]==countt[2])) return false;


    string s1="",t1="";
    for (char c:s) {if (c!='b') s1+=c;}
    for (char c:t) {if (c!='b') t1+=c;}
    if (s1!=t1) return false;


    s1="",t1="";
    for (char c:s) {if (c!='c') s1+=c;}
    for (char c:t) {if (c!='c') t1+=c;}
    vll vs,vt;
    for (ll i=0; i<s1.size(); i++){
        if (s1[i]=='a') {vs.push_back(i==0 ? 1 : vs[i-1]+1);}
        else {vs.push_back(i==0 ? 0 : vs[i-1]);}
        if (t1[i]=='a') {vt.push_back(i==0 ? 1 : vt[i-1]+1);}
        else {vt.push_back(i==0 ? 0 : vt[i-1]);}

        if (vt[i]>vs[i]) return false;
    }
    

    s1="",t1="";
    for (char c:s) {if (c!='a') s1+=c;}
    for (char c:t) {if (c!='a') t1+=c;}
    vs.clear();
    vt.clear();
    for (ll i=0; i<s1.size(); i++){
        if (s1[i]=='c') {vs.push_back(i==0 ? 1 : vs[i-1]+1);}
        else {vs.push_back(i==0 ? 0 : vs[i-1]);}
        if (t1[i]=='c') {vt.push_back(i==0 ? 1 : vt[i-1]+1);}
        else {vt.push_back(i==0 ? 0 : vt[i-1]);}

        if (vt[i]<vs[i]) return false;
    }


    return true;

}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    cin>>t;
    while(t--){
        if (solve()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}