#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0); 

    int t;
    cin>>t;
    while(t--){

        int* count = new int[26]();
        char c='a';
        while ((int)c!=10){
            scanf("%c",&c);
            count[(int)c-97]++;
        }
        for (int i=0; i<26; i++){
            cout << "a"
        }
    

    }
    return 0;
}