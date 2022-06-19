#include <bits/stdc++.h>
using namespace std;

void sort(int x[], int y[], int n) {
    int pos,max;
    for (int i = 0; i < n; i++) {
        pos = i; max = x[i];
        for (int j=i+1; j<n; j++){
            if (x[j] > x[i])
                pos = j; max =x[j];
        }
        int temp;
        temp = x[i]; x[i] = x[pos]; x[pos] = temp;
        temp = y[i]; y[i] = y[pos]; y[pos] = temp;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n,m;
        cin >> n >> m;
        int x[m],y[m];
        for (int j=0; j<m; j++) {
            cin >> x[j] >> y[j];
        }
        sort(x,y,m);

        int sum = 0;
        int pos = n;
        for (int o=0; o<m; o++) {
            int spots = pos - (pos/y[o]);
            pos = pos/y[o];
            sum += x[o] * spots;
        }
        cout << sum << "\n";
    }
    return 0;
}