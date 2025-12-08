#include <iostream>
using namespace std;

int main(){
    int n_ch = 0, n_words = 0;
    char c = ' ';
    int a = 0;
    cout << "Enter a sentence and end it with enter: ";
    while (a != 10){
        c = getchar();
        a = c;
        if ((a == 32) ||(a == 10)){
            n_words++;
        }
        else{
            n_ch++;
        }
    }
    cout << "Number Of Characters: " << n_ch << endl;
    cout << "Number Of Words: " << n_words << endl;
    
}