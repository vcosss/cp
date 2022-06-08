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
        int* l = new int[n];
        int* r = new int[n];
        int* c = new int[n];
        int* minl_i = new int[n];
        int* maxr_i = new int[n];

        int maxr=INT_MIN, minl=INT_MAX;
        for (int i = 0; i < n; i++){
            cin >> l[i] >> r[i] >> c[i];



            if (r[i] > maxr){
                maxr = r[i];
                maxr_i[i] = i;
            }
            else if (r[i] == maxr){
                if (maxr_i[i-1] == minl_i[i-1]){
                    if (l[i] < minl_i[i-1]){
                        maxr_i[i] = i;
                    }
                    else if (l[i] == minl_i[i-1]){
                        maxr_i[i] = (c[i] < c[maxr_i[i-1]]) ? i : maxr_i[i-1];
                    }
                    else {
                        maxr_i[i] = maxr_i[i-1];
                    }
                }
                else{
                    if (l[i] <= minl){
                        maxr_i[i] = i;
                    }
                    else{
                        maxr_i[i] = (c[i] < c[maxr_i[i-1]]) ? i : maxr_i[i-1];
                    }
                }
            }
            else
                maxr_i[i] = maxr_i[i-1];



            if (l[i] < minl){
                minl = l[i];
                minl_i[i] = i;
            }
            else if (l[i]==minl){
                if (maxr_i[i-1] == minl_i[i-1]){
                    if (r[i] > maxr_i[i-1]){
                        minl_i[i] = i;
                    }
                    else if (r[i] == maxr_i[i-1]){
                        minl_i[i] = (c[i] < c[minl_i[i-1]]) ? i : minl_i[i-1];
                    }
                    else {
                        minl_i[i] = minl_i[i-1];
                    }
                }
                else{
                    if (r[i] >= minl){
                        minl_i[i] = i;
                    }
                    else{
                        minl_i[i] = (c[i] < c[minl_i[i-1]]) ? i : minl_i[i-1];
                    }
                }
            }
            else
                minl_i[i] = minl_i[i-1];



        }

        for (int i=0; i<n; i++){
            if (minl_i[i]==maxr_i[i])
                cout << c[minl_i[i]] << endl;
            else
                cout << c[minl_i[i]] + c[maxr_i[i]] << endl;
        }

    }
    return 0;
}
