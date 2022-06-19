#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n,p,k;
        cin >> n >> p >> k;
        int rem=p%k;
        cout << (n/k)*rem + min(n%k,rem) + (p/k) + 1 << endl;
    }   
	return 0;
}