#include <iostream>
#define size 5
using namespace std;

int main(){
    int arr[size];

    // read
    for (int i=0; i<size; i++){
        cout << "Enter arr[" << i << "] = ";
        cin >> arr[i];
    }

    // print
    for (int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    // sum
    int sum=0;
    for (int i=0; i<size; i++){
        sum+=arr[i];
    }
    cout << "Sum = " << sum << endl;

    // max
    int max=arr[0];
    for (int i=1; i<size; i++){
        if (arr[i] > max){
            max=arr[i];
        }
    }
    cout << "MAX VALUE = " << max << endl;

    // min
    int min=arr[0];
    for (int i=1; i<size; i++){
        if (arr[i] < min){
            min=arr[i];
        }
    }
    cout << "MIN VALUE = " << min << endl;

    // search
    int value = 0;
    bool found = false;
    cout << "Enter Value: ";
    cin >> value;
    for (int i=0; i<size; i++){
        if (arr[i] == value){
            found = true;
            cout << "FOUND VALUE AT INDEX " << i << endl;
        }
    }
    if (!found){
        cout << "DIDN'T FOUND VALUE" << endl;
    }
}
