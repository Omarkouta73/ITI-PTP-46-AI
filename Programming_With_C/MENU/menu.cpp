#include <iostream>
// #include <conio.h>
using namespace std;

int main(){
    // new display exit
    char ch;
    bool flag = true;
    while (flag){
        system("clear");
        cout << "[d/D] Display Menu" << endl;
        cout << "[n/N] New Menu" << endl;
        cout << "[e/E] Exit" << endl;
        ch = getchar();
        switch (ch)
        {
        // display
        case 'd':
        case 'D':
            cout << "Display" << endl;
            break;

        // new
        case 'n':
        case 'N':
            cout << "New" << endl;
            break;
        
        // new
        case 'e':
        case 'E':
            flag = false;
            break;
        
        default:
            break;
        }
        if (flag) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }

    }
    
}