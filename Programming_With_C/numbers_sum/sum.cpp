#include <iostream>
using namespace std;

int main(){
    int x=0, sum = 0;
    for (int i=0; i<5; i++){
        cout << "Enter a digit: ";
        cin >> x;
        sum+=x;
    }
    cout << sum << endl;
}