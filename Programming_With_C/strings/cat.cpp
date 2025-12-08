#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <cstring>

using namespace std;

int main(){
    char first_name[10] = "Omar";
    char last_name[10] = "Kouta";
    strcat(first_name, " ");
    strcat(first_name, last_name);
    cout << first_name << endl;
}