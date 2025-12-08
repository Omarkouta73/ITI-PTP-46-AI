#include <iostream>
using namespace std;

int main(){
    char ch=' ';
    cout << "ENter character:";
    cin >> ch;
    int x = ch;
    if (x <= 90){
        cout << "This is a capital character" << endl;
        cout << "Its small character will be: " << char(x+32) << endl;
    } else{
        cout << "This is a small character" << endl;
        cout << "Its capital character will be: " << char(x-32) << endl;
    }
}


// 65, 66, ..., 90
// 97, 98, ..., 122