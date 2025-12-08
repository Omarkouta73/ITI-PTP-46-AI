#include <iostream>
using namespace std;


int main(){
    int arr[5] = {1,7,9,3,5};
    int* ptr = arr;
    for (int i=0; i<5; i++){
        cout << *(ptr+i) << endl;
    }
}