#include <iostream>
using namespace std;


int main(){
    int n = 0;
    cout << "Enter The Array Size:";
    cin >> n;
    int* arr = new int[n];
    for (int i=0; i<n; i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    cout << endl;
    for (int i=0; i<n; i++){
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }

    delete[] arr;
}