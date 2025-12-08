#include <iostream>
#include <string.h>
#include <cmath>
#include <termios.h>
#include <unistd.h>
using namespace std;

 char getch() {
    char buf = 0;
    struct termios old = {0};
    tcgetattr(STDIN_FILENO, &old);
    old.c_lflag &= ~(ICANON | ECHO); // disable canonical mode and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &old);
    read(STDIN_FILENO, &buf, 1);
    old.c_lflag |= (ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSADRAIN, &old);
    return buf;
}

pair<int, int> swap_v(int x, int y){
    int temp = y;
    y = x;
    x = temp;

    return {x, y};
}

void swap_p(int* x, int* y){
    int temp = *y;
    *y = *x;
    *x = temp;
}

void swap_r(int& x, int& y){
    int temp = y;
    y = x;
    x = temp;
}
int main(){
    int x = 73;
    int y = 121;
    pair<int,int> swapped = swap_v(x, y);
    x = swapped.first;
    y = swapped.second;
    cout <<  x << " " << y << endl;
    swap_p(&x, &y);
    cout <<  x << " " << y << endl;
    swap_r(x, y);
    cout <<  x << " " << y << endl;
    
    // char menu[3][10] = {"new", "display", "exit"};
    // cout << menu[0] << endl;

    // unsigned short int x = pow(2, 16);

    // cout << x << endl;
    // cout << sizeof(x) << endl;
    // cout << endl;
    // cout << sizeof(short int) << endl; // 2 bytes = 8*2 = 16 bits => -2^16 ... 2^16-1
    // cout << sizeof(int) << endl;
    // cout << sizeof(long int) << endl;
    
    // short int x = 1;
    // cout << ++x << endl; // 2
    // cout << x++<< endl; // 2
    // cout << x << endl; // 3

    // int y = 3;
    // double x = y + 1.5;

    // cout << y << endl;
    // cout << x << endl;
    // cout << (int)x << endl;

    // char n = '1';
    
    // int b = pow(2, 10);
    // short int s = b;

    // cout << s << endl;
    // cout << sizeof(s) << endl;

    // int x = 10;

    // switch (x){
    //     case 1:
    //         cout << "0001" << endl;
    //         break;

    //     case 2:
    //         cout << "0010" << endl;
    //         break;

    //     case 3:
    //         cout << "0011" << endl;
    //         break;

    //     case 0:
    //     case -1:
    //         cout << "OOFL"<< endl;
    //         break;

    //     default:
    //         cout << "00000000000000404" << endl;
    // }

    // int x = 2;
    // int y = 1;
    // do{
    //     cout << "I am gonna win!" << endl;
    //     x++;

    // } while (x <= y);


    // char str[100];
    // char ch;
    // int i=0;
    // while (true) {
    //     ch = getch();       // read one char at a time
    //     str[i++] = ch;
    //     if (ch == 10) break; 
    // }

    // str[i] = '\0';           // null-terminate the string

    // cout << "\nYou entered: " << str << endl;

    // char ch = getch();

    // // cin >> ch;

    // cout << ch;

    // int arr[10];

    // for (int i = 0; i < 10; i++){
    //     arr[i] = i*2;
    // }

    // for (int x: arr){
    //     cout << x << " ";
    // }

    // int *arr = new int[10];

    // for (int i = 0; i < 10; i++){
    //     arr[i] = i*2;
    // }

    // for (int i = 0; i < 10; i++){
    //     cout << *(arr+i) << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < 10; i++){
    //     cout << arr[i] << " ";
    // }

    // delete[] arr;

    // int a = 10;
    // int* x = &a;

    // cout << a << " in address: " << x << endl;
    // cout << *x << endl;

    int a = 10;
    int* b = &a;

    a = 5;
    cout << a << " " << *b << endl;
    
    
    *b = 3;
    cout << a << " " << *b << endl;



    return 0;
}