#include <iostream>
using namespace std;


int reverse(int x){
    int reversed = 0;
    int last_digit = 0;

    // 123 -> 3 (last)
    // 12 (/10) - > 2 last
    // 3 * 10 + 2 = 32
    // 1 -> 1 last
    // 32 * 10 + 1 = 321
    while (x != 0){
        last_digit = x % 10;
        reversed = reversed * 10 + last_digit;
        x /= 10;
    }
    return reversed;
}

int main(){
    int x = 0;
    cout << "ENTER AN INTEGER: "s;
    cin >> x;

    cout << reverse(x) << endl;

}