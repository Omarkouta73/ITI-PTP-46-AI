#include <iostream>
using namespace std;


void swap(int* x, int* y){ 
    int temp = *x; 
    *x = *y;
    *y = temp;
}

int main(){
    int x = 10, y = 20;
    cout << "Before: x = " << x << ", y = " << y << endl;
    swap(&x, &y); 
    cout << "After: x = " << x << ", y = " << y << endl;
    return 0;
}