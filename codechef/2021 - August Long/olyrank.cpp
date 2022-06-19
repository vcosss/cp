#include<iostream>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int m[6];
        for (int j=0; j<6; j++)
            cin >> m[j];
        if (m[0]+m[1]+m[2] > m[3]+m[4]+m[5])
            cout << 1;
        else if (m[0]+m[1]+m[2] < m[3]+m[4]+m[5])
            cout << 2;
        else if (m[0] > m[3])
            cout << 1;
        else if (m[0] < m[3])
            cout << 2;
        else if (m[1] > m[4])
            cout << 1;
        else if (m[1] < m[4])
            cout << 2;
        else if (m[0] > m[3])
            cout << 1;
        else
            cout << 2;
        cout << endl;
    }

    return 0;
}
