#include <iostream>
using namespace std;

void swapA(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void swapR(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a=10, b=20;

    cout << a << " " << b << endl;

    swapR(a, b);

    cout << a << " " << b << endl;

    swapA(&a, &b);

    cout << a << " " << b << endl;
    
    return 0;
}