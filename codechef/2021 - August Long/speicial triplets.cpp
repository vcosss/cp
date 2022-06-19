#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int N;
        cin >> N;
        int triplets=0;
        for (int c=1; c <= N/2; c++){
            for (int x=1; x <= N/c; x++){
                triplets += (N-c) / (c*x);
            }
        }
        cout << triplets << endl;
    }
    return 0;
}