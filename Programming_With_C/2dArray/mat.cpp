#include <iostream>
# define rows 3
# define cols 3
using namespace std;

void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}

int main() {
    int arr[rows][cols];

    cout << "Enter values for a " << rows << "x" << cols << " matrix:" << endl;

    int startX = 10;
    int startY = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            gotoxy(startX + j * 4, startY + i * 2);
            cin >> arr[i][j];
        }
    }

    // print matrix
    cout << "\nMatrix entered:\n";
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
            sum+=arr[i][j];
        }
        cout << "  " << sum;
        cout << endl;
    }

    // avg each col
    for (int j = 0; j < cols; j++) {
        int col_sum = 0;
        for (int i = 0; i < rows; i++) {
            col_sum += arr[i][j];
        }
        float avg = col_sum*1.0 / rows;
        cout << avg << "\t";
    }

    return 0;
}
