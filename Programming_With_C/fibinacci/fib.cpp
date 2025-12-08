#include <iostream>
using namespace std;

int main(){
    int x = 0;
    cout << "Enter a digit: ";
    cin >> x;
    // 0 1 2 3 4 5 6  7 8
    // 0 1 1 2 3 5 8 13 21
    int prev = 0;
    int curr = 1;
    int next = 0;
    for (int i=1; i<x; i++){
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    cout << next << endl;
}

// prev = 0 , curr = 1;
// next = prev + curr ; next = 1
// prev = curr (1), curr = next (1)
// next = prev + curr= = 2