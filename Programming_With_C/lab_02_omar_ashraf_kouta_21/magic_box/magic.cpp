#include <iostream>
#include <iomanip>
using namespace std;

void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}

int main() {
    int n;
    cout << "Enter an odd number for magic box size: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Invalid number" << endl;
        return 0;
    }

    int row = 0;
    int col = 0;
    int num = 1;

    int x_start = 10, y_start = 3;

    while (num <= n * n) {
        if (num == 1) {
            row = 0;
            col = n / 2;
        }
        
        cout << num;

        //update
        gotoxy(x_start + col * 4, y_start + row * 2);
        
        if (num % n == 0) {
            row = (row + 1) % n;
        } else {
            // row-- col++
            row = (row - 1 + n) % n;
            col = (col + 1) % n;
        }
        
        num++;
    }

    cout << "\n\n";
    return 0;
}
