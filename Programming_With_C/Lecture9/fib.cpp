#include <iostream>
using namespace std; 


// 1 1 2 3 5 8 13 21 34
// 0 1 2 3 4 5 6  7  8

// 4 :=> 5
// fib(4) = fib(2) + fib(3) = fib(n-1) + fib(n-2)
// base :=> 0 / 1 => 1

int fib(int x){
    if (x < 0){
        return -1;
    }
    if (x == 0 || x == 1){
        return 1;
    }
    return fib(x-1) + fib(x-2);
}

int main(){
    
    int x = fib(-1);

    cout << "The Answer is: " << x << endl;
    
    return 0;
}