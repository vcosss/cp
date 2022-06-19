#include <iostream>
using namespace std;

int distinct(int arr[], int len){
    int dis = 0;
    for (int i=0; i<len; i++){
        int j = 0;
        for (; j<i; j++)
            if (arr[i] == arr[j])
                break;
        if (i == j)
            dis += 1;    
    }
    return dis;     
}

int[] sort(int arr[]){
    
}

int main() {
	
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int diff[4];
        for (int j=0; j<4; j++)
            cin >> diff[j];
        if (distinct(diff,4) == 1)
            cout << 0;
        else if (distinct(diff,4) == 2){
            if (sort(diff)[1]!=sort(diff)[2])
                cout << 2;
            else
                cout << 1;
        }
        else
            cout << 2;
        cout << endl;
    }
	return 0;
}
