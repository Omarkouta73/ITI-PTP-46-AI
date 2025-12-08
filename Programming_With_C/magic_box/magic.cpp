#include <iostream>
#include <iomanip>
using namespace std;

void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}

void solveMagicBox(int n) {
    
    int row=0, col=0;
    int startX = 5; 
    int startY = 4; 
    
    for(int num = 1; num <= n * n; num++) {
        if(num == 1) {
            // if num=1, row=0 and col=n/2
            row = 0;
            col = n / 2;
        }
        else {
            // if previous number is divisible by n
            if((num - 1) % n == 0) {
                row++;
            }
            else {
                row--;
                col++;
            }
            
            if(row < 0) {
                row = n - 1;
            }
            if(col >= n) {
                col = 0;  
            }
        }
        
        int xPos = startX + (col * 5);
        int yPos = startY + row;
        
        gotoxy(xPos, yPos);
        cout << num;
    }
    
    gotoxy(1, startY + n + 2);
    
    int magicConstant = n * (n * n + 1) / 2;
    cout << "Magic Sum: " << magicConstant << endl;
    cout << endl;
}

int main() {
    int n;
    
    cout << "Enter the order of magic square (odd number): ";
    cin >> n;
    
    if(n % 2 == 0) {
        cout << "Please enter an odd number!" << endl;
        return 1;
    }
    
    solveMagicBox(n);
    
    return 0;
}