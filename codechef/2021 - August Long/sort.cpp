#include <iostream>
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

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {

    int x[] = {3,5,1,7,0};
    int y[] = {1,2,3,4,5};

    printArray(x,5);
    printArray(y,5);

    sort(x,y,5);

    printArray(x,5);
    printArray(y,5);

    return 0;
}