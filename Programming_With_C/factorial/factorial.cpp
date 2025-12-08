#include <iostream>
using namespace std;


int factorial(int x){ 
    int y = 1;
    for (int i=0; i<x; i++){
        y *= (x-i);
    }

    return y;
}

int main(){
    int x = 0;
    cout << "Enter an integer: ";
    cin >> x;
    
    cout << factorial(x) << endl;
}