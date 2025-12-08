#include <iostream>
using namespace std;


int pow(int base, int exp){
    // 2 3
    // 2 * 2 * 2
    int i = 0;
    int out = 1;
    while (i < exp){
        // cout << i << endl;
        out *= (base);
        i++;
    }
    return out;
}
int main(){
    int base = 0;
    int exp = 0;
    cout << "Enter base - exp: ";
    cin >> base >> exp;
    cout << pow(base, exp) << endl;
}